#include "ScalarConverter.hpp"

/* -------------------------------------------------------------------------- */
/*                           Orthodox Canonical Form                          */
/* -------------------------------------------------------------------------- */

ScalarConverter::ScalarConverter()
{
	// std::cout << "ScalarConverter Default Constructor called" << std::endl;
}

ScalarConverter::~ScalarConverter()
{
	// std::cout << "ScalarConverter Default Destructor called" << std::endl;
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
	if (str == "-inff")
		i = 1;
	if (str == "+inff")
		i = 0;
	switch (i)
	{
		std::cout << "Char: " << "Conversion not possible!\n";
		std::cout << "Int: " << "Conversion not possible!\n";
		case (0):

			std::cout << "Float: " << "+inff\n";
			std::cout << "Double: " << "+inf\n";
			break ;
		case (1):
			std::cout << "Char: " << "Conversion not possible!\n";
			std::cout << "Int: " << "Conversion not possible!\n";
			std::cout << "Float: " << "-inff\n";
			std::cout << "Double: " << "-inf\n";
			break ;
		case (2):
			std::cout << "Char: " << "Conversion not possible!\n";
			std::cout << "Int: " << "Conversion not possible!\n";
			std::cout << "Float: " << "nanf\n";
			std::cout << "Double: " << "nan\n";
			break ;
	}
}

void	ScalarConverter::convert(const std::string& str)
{
	ScalarConverter		converter;
	long double			nbr = 0;
	std::istringstream	iss(str);
	const char*	types[] = {"+inf", "-inf", "nan", "+inff", "-inff", NULL};

	std::cout << "Converting: \"" << str << "\"\n";
	for (int i = 0; i < 5; i++)
	{
		if (str == types[i])
		{
			printLimits(str);
			return ;
		}
	}
	iss >> nbr;
	if (str[0] == '\'' && str.length() == 3)
	{
		char	a = str[1];

		nbr = static_cast<int>(a);
	}
	if (nbr == 0 && (str[0] != '0' || (str[1] != '0' && (str[0] != '+' || str[0] != '-'))))
	{
		std::cout << "Char: " << "Conversion not possible!\n";
		std::cout << "Int: " << "Conversion not possible!\n";
		std::cout << "Float: " << "Conversion not possible!\n";
		std::cout << "Double: " << "Conversion not possible!\n";
		return ;
	}
	converter.printChar(nbr);
	if (nbr > INT_MAX || nbr < INT_MIN)
		std::cout << "Int: Conversion not possible!" << std::endl;
	else
		std::cout << "Int: " << static_cast<int>(nbr) << std::endl;
	if (nbr - static_cast<int>(nbr) != 0.0)
	{
		if (nbr > FLT_MAX || nbr < FLT_MIN)
			std::cout << "Float: " << "Conversion not possible!\n";
		else
			std::cout << "Float: " << static_cast<float>(nbr) << "f" << std::endl;
		if (nbr > DBL_MAX || nbr < DBL_MIN)
			std::cout << "Double: " << "Conversion not possible!\n";
		else
			std::cout << "Double: " << static_cast<double>(nbr) << std::endl;
	}
	else
	{
		if (nbr > FLT_MAX || nbr < FLT_MIN)
			std::cout << "Float: " << "Conversion not possible!\n";
		else
			std::cout << "Float: " << static_cast<float>(nbr) << ".0f" << std::endl;
		if (nbr > DBL_MAX || nbr < DBL_MIN)
			std::cout << "Double: " << "Conversion not possible!\n";
		else
			std::cout << "Double: " << static_cast<double>(nbr) << ".0" << std::endl;
	}
}

void	ScalarConverter::printChar(long double nbr)
{
	if (nbr < 0 || nbr > 256 || nbr - static_cast<int>(nbr) != 0.0)
		std::cout << "Char: " << "Conversion not possible!\n";
	else if (!std::isprint(static_cast<int>(nbr)))
		std::cout << "Char: " << "Character unprintable!\n";

	else
		std::cout << "Char: '" << static_cast<char>(nbr) << "'" << std::endl;
}
