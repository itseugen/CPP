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

void	printLimits(std::string str)
{
	const char*	types[] = {"+inf", "-inf", "nan", NULL};
	int			i = 0;

	while (i < 3)
	{
		if (str == types[i])
			break ;
		i++;
	}
	switch (i)
	{
		case (0):
			std::cout << "Char: " << "Conversion not possible!\n";
			std::cout << "Int: " << "Conversion not possible!\n";
			std::cout << "Float: " << "+inf\n";
			std::cout << "Double: " << "+inf!\n";
			break ;
		case (1):
			std::cout << "Char: " << "Conversion not possible!\n";
			std::cout << "Int: " << "Conversion not possible!\n";
			std::cout << "Float: " << "-inf\n";
			std::cout << "Double: " << "-inf!\n";
			break ;
		case (2):
			std::cout << "Char: " << "Conversion not possible!\n";
			std::cout << "Int: " << "Conversion not possible!\n";
			std::cout << "Float: " << "nan\n";
			std::cout << "Double: " << "nan\n";
			break ;
	}
}

void	ScalarConverter::convert(const std::string& str)
{
	ScalarConverter		converter;
	long double			nbr = 0;
	std::istringstream	iss(str);

	iss >> nbr;
	std::cout << "Converting: \"" << str << "\"\n";
	if (str.length() == 1)
	{
		char	a = str[0];

		nbr = static_cast<int>(a);
	}
	else if (str == "+inf" || str == "-inf" || str == "nan")
	{
		printLimits(str);
		return ;
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
	if (nbr - static_cast<int>(nbr) != 0.0)
	{
		std::cout << "Float: " << static_cast<float>(nbr) << "f" << std::endl;
		std::cout << "Double: " << static_cast<double>(nbr) << std::endl;
	}
	else
	{
		std::cout << "Float: " << static_cast<float>(nbr) << ".0f" << std::endl;
		std::cout << "Double: " << static_cast<double>(nbr) << ".0" << std::endl;
	}
}

void	ScalarConverter::printChar(long double nbr)
{
	if (nbr < 0 || nbr > 256 || !std::isprint(static_cast<int>(nbr)) || nbr - static_cast<int>(nbr) != 0.0)
	{
		std::cout << "Char: " << "Conversion not possible!\n";
	}
	else
		std::cout << "Char: '" << static_cast<char>(nbr) << "'" << std::endl;
}
