#include <iostream>
#include <string>

#include "iter.hpp"

static void	test01(void);
static void	test02(void);
static void	incr(int& i);
static void	print(int i);
static void	print_str(std::string i);
static void	squareRoot(int &i);
static void	str_toUpper(std::string& str);

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
	int	arr[] = {0, 1, 2, 3, 4};

	::iter(arr, 5, print);
	std::cout << "Increment:\n";
	::iter(arr, 5, incr);
	::iter(arr, 5, print);
	std::cout << "\nSquare Root:\n";
	::iter(arr, 5, squareRoot);
	::iter(arr, 5, print);
}

static void	test02(void)
{
	std::string	arr[] = {"I", "am", "your", "father", "!"};

	::iter(arr, 5, print_str);
	::iter(arr, 5, str_toUpper);
	::iter(arr, 5, print_str);
}

static void	incr(int& i)
{
	i = i + 1;
}

static void	print(int i)
{
	std::cout << i << std::endl;
}

static void	print_str(std::string i)
{
	std::cout << i << std::endl;
}

static void	squareRoot(int &i)
{
	i = i * i;
}

static void	str_toUpper(std::string& str)
{
	for (int i = 0; str[i]; i++)
		str[i] = std::toupper(str[i]);
}
