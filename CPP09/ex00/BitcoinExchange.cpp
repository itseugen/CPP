#include "BitcoinExchange.hpp"

class	BitcoinExchange::CannotOpenDatabaseException : public std::exception
{
	virtual const char*	what() const throw()
	{
		return ("Cannot open the database file!");
	}
};

class	BitcoinExchange::CannotParseLineException : public std::exception
{
	virtual const char*	what() const throw()
	{
		return ("Cannot parse line!");
	}
};

/* -------------------------------------------------------------------------- */
/*                           Orthodox Canonical Form                          */
/* -------------------------------------------------------------------------- */

BitcoinExchange::BitcoinExchange()
{
	std::cout << "BitcoinExchange Default Constructor called" << std::endl;
}

BitcoinExchange::~BitcoinExchange()
{
	std::cout << "BitcoinExchange Default Destructor called" << std::endl;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& copy)
{
	std::cout << "BitcoinExchange Copy Constructor called" << std::endl;
	if (this != &copy)
	{
		this->database = copy.database;
	}
}

BitcoinExchange&	BitcoinExchange::operator=(const BitcoinExchange &copy)
{
	std::cout << "BitcoinExchange Copy Assignment called" << std::endl;
	if (this != &copy)
	{
		this->database = copy.database;
	}
	return (*this);
}

/* -------------------------------------------------------------------------- */
/*                                  Functions                                 */
/* -------------------------------------------------------------------------- */

void	BitcoinExchange::input_database(std::string filename)
{
	std::ifstream inputFile(filename.c_str());
	if (!inputFile.is_open())
	{
		throw CannotOpenDatabaseException();
	}
	std::string	line;
	std::getline(inputFile, line);
	while (std::getline(inputFile, line))
	{
		std::istringstream	iss(line);
		std::string			date;
		double				exchange_rate;
		if (std::getline(iss, date, ',') && iss >> exchange_rate)
		{
			this->database[date] = exchange_rate;
		}
		else
			std::cerr << "Cannot Parse line: " << line << "!\n";
	}
	inputFile.close();
    // for (std::map<std::string, double>::const_iterator iter = database.begin(); iter != database.end(); ++iter) {
    //     // Access the key and value using iterator
    //     std::cout << "Date: " << iter->first << ", Value: " << iter->second << std::endl;
    // }
}

void	BitcoinExchange::input_file(std::string filename)
{
	std::ifstream inputFile(filename.c_str());
	if (!inputFile.is_open())
	{
		throw CannotOpenDatabaseException();
	}
	std::string	line;
	std::getline(inputFile, line);
	while (std::getline(inputFile, line))
	{
		std::istringstream	iss(line);
		std::string			date;
		double				bitcoin_value;
		if (std::getline(iss, date, '|') && iss >> bitcoin_value)
		{
			if (legal_date(date) == false)
				std::cout << "Error: bad input => " << line << std::endl;
			else if (std::fabs(bitcoin_value) > INT_MAX)
				std::cout << "Error: too large a number." << std::endl;
			else if (bitcoin_value < 0)
				std::cout << "Error: not a positive number!" << std::endl;
			else
				calc_value(date, bitcoin_value);
		}
		else
			std::cerr << "Cannot Parse line: " << line << "!\n";
	}
	inputFile.close();
}

bool	BitcoinExchange::legal_date(std::string date)
{
	std::istringstream	iss(date);
	int		y;
	int		m;
	int		d;
	char	d1, d2;

	if (!(iss >> y >> d1 >> m >> d2 >> d))
		return (false);
	if (d1 != '-' || d2 != '-')
		return (false);
	if (y <= 0)
		return (false);
	if (m < 1 || m > 12)
		return (false);
	if (d < 1 || d > 31)
		return (false);
	return true;
}

void	BitcoinExchange::calc_value(std::string date, double bitcoin_value)
{
	double		res;
	std::string	closest_date = findClosestDate(date);

	if (closest_date != "NULL")
	{
		res = database[closest_date] * bitcoin_value;
		std::cout << date << " => " << bitcoin_value << " = " << res << std::endl;
	}
	else
		std::cerr << "Error: Date too early!" << std::endl;
}

std::string	BitcoinExchange::findClosestDate(const std::string& inputDate)
{
	double		minDifference = std::numeric_limits<double>::max();
	std::string	closestDate = "NULL";

	for (std::map<std::string, double>::const_iterator iter = database.begin(); iter != database.end(); ++iter)
	{
		const std::string&	date = iter->first;
		double				difference = compareDates(date, inputDate);

		if (difference <= 0 && std::fabs(difference) < minDifference)
		{
			minDifference = std::fabs(difference);
			closestDate = date;
		}
	}
	// std::cout << "closest date to: " << inputDate << " is: " << closestDate << std::endl;
	return (closestDate);
}

double	BitcoinExchange::compareDates(const std::string& date1, const std::string& date2)
{
	int	y1, m1, d1;
	int	y2, m2, d2;

	sscanf(date1.c_str(), "%d-%d-%d", &y1, &m1, &d1);
	sscanf(date2.c_str(), "%d-%d-%d", &y2, &m2, &d2);

	double	difference = (y1 - y2) * 365.0 + (m1 - m2) * 30.0 + (d1 - d2);

	return (difference);
}

// double BitcoinExchange::compareDates(const std::string& date1, const std::string& date2)
// {
//     // Parse dates
//     int y1 = 0, m1 = 0, d1 = 0;
//     int y2 = 0, m2 = 0, d2 = 0;

//     sscanf(date1.c_str(), "%d-%d-%d", &y1, &m1, &d1);
//     sscanf(date2.c_str(), "%d-%d-%d", &y2, &m2, &d2);

//     // Convert dates to days since epoch
//     time_t time1, time2;
//     struct tm tm1 = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; // Initialize all fields to 0
//     struct tm tm2 = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; // Initialize all fields to 0

//     tm1.tm_year = y1 - 1900; // years since 1900
//     tm1.tm_mon = m1 - 1;     // months since January
//     tm1.tm_mday = d1;        // day of the month

//     tm2.tm_year = y2 - 1900; // years since 1900
//     tm2.tm_mon = m2 - 1;     // months since January
//     tm2.tm_mday = d2;        // day of the month

//     time1 = mktime(&tm1);
//     time2 = mktime(&tm2);

//     // Calculate difference in days
//     double difference = difftime(time1, time2) / (60 * 60 * 24);

//     return difference;
// }


