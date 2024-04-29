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