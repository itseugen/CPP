#include "Span.hpp"

static void	testSubject(void);
static void	stdErrTest(void);
static void	testAddManyNumers(void);
static void	spanTest(void);

int	main(void)
{
	std::cout << "Standart Error Test:\n";
	stdErrTest();
	std::cout << "\n\nSubject Test Main:\n";
	testSubject();
	std::cout << "\n\nAdd many numbers test:\n";
	testAddManyNumers();
	std::cout << "\n\nSpan test:\n";
	spanTest();
	return (0);
}

static void	stdErrTest(void)
{
	try
	{
		Span	sp(0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	try
	{
		Span	sp(4);

		sp.addNumber(1);
		sp.addNumber(1);
		sp.addNumber(1);
		sp.addNumber(1);
		sp.addNumber(1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	try
	{
		Span	sp(4);

		sp.addNumber(1);
		sp.shortestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	try
	{
		Span	sp(1);

		sp.addNumber(1);
		sp.addXNumbers(200);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
}

static void	testSubject(void)
{
	try
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

static void	testAddManyNumers(void)
{
	try
	{
		Span	sp(200);

		sp.addXNumbers(300);
		sp.printArray();
		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

static void	spanTest(void)
{
	try
	{
		Span	sp(2);

		sp.addNumber(-42);
		sp.addNumber(42);
		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}