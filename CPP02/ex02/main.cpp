#include <iostream>
#include "Fixed.hpp"

int main(void)
{
	// Fixed a;
	// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	// std::cout << a << std::endl;
	// std::cout << ++a << std::endl;
	// std::cout << a << std::endl;
	// std::cout << a++ << std::endl;
	// std::cout << a << std::endl;

	// std::cout << b << std::endl;
	// std::cout << Fixed::max(a, b) << std::endl;
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << "a: " << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << "a after ++a: " << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << "a after a++: " << a << std::endl;

	std::cout << "b: " << b << std::endl;
	std::cout << "max(a, b): " << Fixed::max(a, b) << std::endl;
	std::cout << "min(a,b): " << Fixed::min(a, b) << std::endl;
	std::cout << "a + b: " << a + b << std::endl;
	std::cout << "a - b: " << a - b << std::endl;
	std::cout << "a * b: " << a * b << std::endl;
	std::cout << "a / b: " << a / b << std::endl;
	std::cout << "a == b: " << (a == b) << std::endl;
	std::cout << "a != b: " << (a != b) << std::endl;
	std::cout << "a > b: " << (a > b) << std::endl;

	// Fixed a(20);
	// Fixed b(10);

	// std::cout << a << std::endl;
	// std::cout << b << std::endl;
	// std::cout << (a > b) << std::endl;
	// std::cout << (a < b) << std::endl;
	// std::cout << (a <= b) << std::endl;
	// std::cout << (a != b) << std::endl;
	// std::cout << (a == b) << std::endl;
	// std::cout << (a + b) << std::endl;
	// std::cout << (a - b) << std::endl;
	// std::cout << (a * b) << std::endl;
	// std::cout << (a / b) << std::endl;
	// std::cout << a << std::endl;
	// std::cout << ++a << std::endl;
	// std::cout << a << std::endl;
	// std::cout << a++ << std::endl;
	// std::cout << a << std::endl;
	return (0);
}
