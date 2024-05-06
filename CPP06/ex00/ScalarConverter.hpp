#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <sstream>
# include <iomanip>
# include <cctype>
# include <limits>

class ScalarConverter
{
	private:
		ScalarConverter();

		void	printChar(long double nbr);
		bool	check_number(std::string& str);
	public:
		~ScalarConverter();
		ScalarConverter(const ScalarConverter& copy);
		ScalarConverter& operator=(const ScalarConverter& copy);

		static void	convert(std::string& str);
};

#endif /*SCALARCONVERTER_HPP*/