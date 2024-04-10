#include "ScalarConverter.hpp"

/* -------------------------------------------------------------------------- */
/*                           Orthodox Canonical Form                          */
/* -------------------------------------------------------------------------- */

ScalarConverter::ScalarConverter()
{
	std::cout << "ScalarConverter Default Constructor called" << std::endl;
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "ScalarConverter Default Destructor called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter& copy)
{
	if (this != &copy)
		return ;
		// *this = copy;
}

ScalarConverter&	ScalarConverter::operator=(const ScalarConverter &copy)
{
	if (this != &copy)
	{
	}
	return (*this);
}

void	ScalarConverter::convert(const std::string& str)
{
	ScalarConverter		converter;
	long double			nbr = 0;
	std::istringstream	iss(str);

	iss >> nbr;
	if (str.length() == 1)
	{
		char	a = str[0];

		nbr = static_cast<int>(a);
	}
	else if (str.length() > 1 && !std::isdigit(str[0]))
	{
		std::cout << "Char: " << "Conversion not possible!\n";
		std::cout << "Int: " << "Conversion not possible!\n";
		std::cout << "Float: " << "Conversion not possible!\n";
		std::cout << "Double: " << "Conversion not possible!\n";
		return ;
	}
	converter.printChar(nbr);
	std::cout << "Int: " << static_cast<int>(nbr) << std::endl;
	std::cout << "Float: " << static_cast<float>(nbr) << std::endl;
	std::cout << "Double: " << static_cast<double>(nbr) << std::endl;
}

void	ScalarConverter::printChar(long double nbr)
{
	if (nbr < 0 || nbr > 256 || !std::isprint(static_cast<int>(nbr)))
	{
		std::cout << "Char: " << "Conversion not possible!\n";
	}
	std::cout << "Char: " << static_cast<int>(nbr) << std::endl;
}
