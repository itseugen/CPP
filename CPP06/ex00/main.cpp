#include "ScalarConverter.hpp"

int	main(void)
{
	ScalarConverter::convert("234.0f");
	std::cout << std::endl;
	ScalarConverter::convert("43.32423");
	std::cout << std::endl;
	ScalarConverter::convert("-234");
	std::cout << std::endl;
	ScalarConverter::convert("-5435.432");
	std::cout << std::endl;
	ScalarConverter::convert("74.0");
	std::cout << std::endl;
	ScalarConverter::convert("+inf");
	std::cout << std::endl;
	ScalarConverter::convert("-inf");
	std::cout << std::endl;
	ScalarConverter::convert("nan");
	std::cout << std::endl;
	std::cout << "Positive Infinity: " << std::numeric_limits<double>::infinity() << std::endl;
	std::cout << "Negative Infinity: " << -std::numeric_limits<double>::infinity() << std::endl;
	std::cout << "NaN: " << std::numeric_limits<float>::quiet_NaN() << std::endl;
	return (0);
}
