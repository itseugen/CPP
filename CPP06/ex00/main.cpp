#include "ScalarConverter.hpp"

int	main(void)
{
	ScalarConverter::convert("");
	std::cout << std::endl;
	ScalarConverter::convert("3812839012849012845908124901289041284901284908124908129048129048019489012849012480");
	std::cout << std::endl;
	ScalarConverter::convert("-3812839012849012845908124901289041284901284908124908129048129048019489012849012480");
	std::cout << std::endl;
	ScalarConverter::convert("150");
	std::cout << std::endl;
	ScalarConverter::convert("-124");
	std::cout << std::endl;
	ScalarConverter::convert("+inff");
	std::cout << std::endl;
	ScalarConverter::convert("-inff");
	std::cout << std::endl;
	ScalarConverter::convert("123.123f");
	std::cout << std::endl;
	ScalarConverter::convert("1");
	std::cout << std::endl;
	ScalarConverter::convert("0");
	std::cout << std::endl;
	ScalarConverter::convert("01");
	std::cout << std::endl;
	return (0);
}
