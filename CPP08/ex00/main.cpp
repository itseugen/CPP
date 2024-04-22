#include "easyfind.hpp"

static void	test01(void);
static void	test02(void);

int	main(void)
{
	std::cout << "Test01:\n";
	test01();
	std::cout << "\nTest02:\n";
	test02();
	return (0);
}

static void	test01(void)
{
	std::vector<int> vec;
	for (int i = 1; i < 6; i++)
		vec.push_back(i);
	try
	{
		std::vector<int>::iterator	idx = easyfind(vec, 4);
		std::cout << "Value found at index: " << std::distance(vec.begin(), idx) << std::endl;
		std::cout << "Value is: " << *idx << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	try
	{
		std::vector<int>::iterator	idx = easyfind(vec, 2344);
		std::cout << "Value found at index: " << std::distance(vec.begin(), idx) << std::endl;
		std::cout << "Value is: " << *idx << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	try
	{
		vec.push_back(2344);
		std::vector<int>::iterator	idx = easyfind(vec, 2344);
		std::cout << "Value found at index: " << std::distance(vec.begin(), idx) << std::endl;
		std::cout << "Value is: " << *idx << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

static void	test02(void)
{
	std::array<int, 5>	arr;
	arr[0] = 10;
	arr[1] = -2;
	arr[2] = 42;
	arr[3] = 12;
	arr[4] = -2345;
	try
	{
		std::array<int, 5>::iterator	idx = easyfind(arr, 42);
		std::cout << "Value found at index: " << std::distance(arr.begin(), idx) << std::endl;
		std::cout << "Value is: " << *idx << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	try
	{
		std::array<int, 5>::iterator	idx = easyfind(arr, -42);
		std::cout << "Value found at index: " << std::distance(arr.begin(), idx) << std::endl;
		std::cout << "Value is: " << *idx << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
