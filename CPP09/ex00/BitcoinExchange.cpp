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
			else if (std::fabs(bitcoin_value) > 1.0e15)
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

	res = database[closest_date] * bitcoin_value;
	std::cout << date << " => " << bitcoin_value << " = " << res << std::endl;
}

//! Using the closest date (makes sense because the graph might be more correct, maybe change)
std::string	BitcoinExchange::findClosestDate(const std::string& inputDate)
{
	double		minDifference = std::numeric_limits<double>::max();
	std::string	closestDate;

	for (std::map<std::string, double>::const_iterator iter = database.begin(); iter != database.end(); ++iter)
	{
		const std::string&	date = iter->first;
		double				difference = fabs(compareDates(date, inputDate));

		if (difference < minDifference)
		{
			minDifference = difference;
			closestDate = date;
		}
	}
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
