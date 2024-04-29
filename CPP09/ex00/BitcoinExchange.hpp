#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <string>
# include <algorithm>
# include <map>
# include <sstream>
# include <fstream>
# include <limits>
# include <cmath>

class BitcoinExchange
{
	private:
		std::map<std::string, double>	database;

		std::string	findClosestDate(const std::string& inputDate);
		bool		legal_date(std::string date);
		void		calc_value(std::string date, double bitcoin_value);
		double		compareDates(const std::string& date1, const std::string& date2);
	public:
		BitcoinExchange();
		~BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& copy);
		BitcoinExchange& operator=(const BitcoinExchange& copy);

		void	input_database(std::string filename);
		void	input_file(std::string filename);

		class	CannotOpenDatabaseException;
		class	CannotParseLineException;
};

#endif /*BITCOINEXCHANGE_HPP*/