#include <iostream>
#include <string>

#include "Array.hpp"

static void	test01(void);
static void	test02(void);
static void	test03(void);
static void	test04(void);
static void	incr(int& i);
static void	squareRoot(int &i);

template <typename T>
void	printArr(Array<T> arr)
{
	for (size_t i = 0; i < arr.size(); i++)
	{
		std::cout << arr[i];
		if (i != arr.size() - 1)
			std::cout << ", ";
	}
	std::cout << std::endl;
}

int main(void)
{
	std::cout << "Test01:\n";
	test01();
	std::cout << "\n\nTest02:\n";
	test02();
	std::cout << "\n\nTest03:\n";
	test03();
	std::cout << "\n\nTest04:\n";
	test04();
	return 0;
}

static void	test01(void)
{
	Array<int>	arr(20);
	printArr(arr);
	for (size_t i = 0; i < arr.size(); i++)
		arr[i] = i;
	printArr(arr);
}

static void	test02(void)
{
	Array<int>	arr(20);
	for (size_t i = 0; i < arr.size(); i++)
		arr[i] = i;
	for (size_t i = 0; i < arr.size(); i++)
		incr(arr[i]);
	printArr(arr);
	for (size_t i = 0; i < arr.size(); i++)
		squareRoot(arr[i]);
	printArr(arr);
}

static void	test03(void)
{
	try
	{
		Array<int>	arr(10);

		arr[-2] = -2;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << '\n';
	}
	try
	{
		Array<int>	arr(-10);

		arr[2] = -2;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << '\n';
	}
}

static void	test04(void)
{
	try
	{
		Array<int>	arr(20);
		Array<int>	arr2(40);

		arr2 = arr;
		for (size_t i = 0; i < arr.size(); i++)
			arr[i] = i + 10;
		for (size_t i = 0; i < arr.size(); i++)
			arr2[i] = i - 10;
		std::cout << "Printing arr: ";
		printArr(arr);
		std::cout << "Printing arr2: ";
		printArr(arr2);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << '\n';
	}
}

static void	incr(int& i)
{
	i = i + 1;
}


static void	squareRoot(int &i)
{
	i = i * i;
}
