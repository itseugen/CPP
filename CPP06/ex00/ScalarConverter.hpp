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
	public:
		~ScalarConverter();
		ScalarConverter(const ScalarConverter& copy);
		ScalarConverter& operator=(const ScalarConverter& copy);

		static void	convert(const std::string& str);
};

#endif /*SCALARCONVERTER_HPP*/