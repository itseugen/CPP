#include <iostream>
#include <string>

#include "Array.hpp"

static void	test01(void);
static void	test02(void);
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

static void	incr(int& i)
{
	i = i + 1;
}


static void	squareRoot(int &i)
{
	i = i * i;
}
