#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <string>
# include <algorithm>
# include <map>
# include <sstream>
# include <fstream>

class BitcoinExchange
{
	private:
		std::map<std::string, double>	database;
	public:
		BitcoinExchange();
		~BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& copy);
		BitcoinExchange& operator=(const BitcoinExchange& copy);

		void	input_database(std::string filename);
		class	CannotOpenDatabaseException;
		class	CannotParseLineException;
};

#endif /*BITCOINEXCHANGE_HPP*/