#include <iostream>
#include <string>

#include "whatever.hpp"

static void	test01(void);
static void	test02(void);

int main(void)
{
	std::cout << "Test01:\n";
	test01();
	std::cout << "\n\nTest02:\n";
	test02();
	return 0;
}

static void	test01(void)
{
	int	a = 2;
	int	b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min(a, b) = " << ::min( a, b ) << std::endl;
	std::cout << "max(a, b) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min(c, d) = " << ::min( c, d ) << std::endl;
	std::cout << "max(c, d) = " << ::max( c, d ) << std::endl;
}

static void	test02(void)
{
	double	a = 42.0;
	double	b = 42.1;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min(a, b) = " << ::min( a, b ) << std::endl;
	std::cout << "max(a, b) = " << ::max( a, b ) << std::endl;
}
