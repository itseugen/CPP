#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <string>
# include <algorithm>
# include <map>
# include <sstream>
# include <fstream>
# include <limits>

class BitcoinExchange
{
	private:
		std::map<std::string, double>	database;
	public:
		BitcoinExchange();
		~BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& copy);
		BitcoinExchange& operator=(const BitcoinExchange& copy);

		bool	legal_date(std::string date);

		void	input_database(std::string filename);
		void	input_file(std::string filename);

		class	CannotOpenDatabaseException;
		class	CannotParseLineException;
};

#endif /*BITCOINEXCHANGE_HPP*/