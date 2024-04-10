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

void	ScalarConverter::convert(std::string& str)
{
	
}