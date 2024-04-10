#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>

class ScalarConverter
{
	private:
		ScalarConverter();
	public:
		~ScalarConverter();
		ScalarConverter(const ScalarConverter& copy);
		ScalarConverter& operator=(const ScalarConverter& copy);

		static void	convert(std::string& str);
};

#endif /*SCALARCONVERTER_HPP*/