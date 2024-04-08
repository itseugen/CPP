#include "Bureaucrat.hpp"

static void	basicTest(void);
static void	failSign(void);
static void	workSign(void);
static void	overloadTest(void);

int	main(void)
{
	std::cout << "Basic Test:\n";
	basicTest();
	std::cout << "\nFailing Signing Test:\n";
	failSign();
	std::cout << "\nWorking Signing Test:\n";
	workSign();
	std::cout << "\nOverload Test:\n";
	overloadTest();
	return (0);
}

static void	basicTest(void)
{
	try
	{
		Form	highGradeForm("HighGrade", 0, 2);
	}
	catch (const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	try
	{
		Form	lowGradeForm("LowGrade", 12, 151);
	}
	catch (const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	try
	{
		Form	workingForm("WorkingForm", 43, 1);
	}
	catch (const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
}

static void	failSign(void)
{
	try
	{
		Form		a("Financial Support", 1, 3);
		Bureaucrat	b("Bob", 34);

		b.signForm(a);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << '\n';
	}
	try
	{
		Form		a("Child Support", 56, 56);
		Bureaucrat	b("Bob", 34);

		b.signForm(a);
		b.signForm(a);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << '\n';
	}
}

static void	workSign(void)
{
	try
	{
		Form		a("Declaration of War", 1, 1);
		Bureaucrat	b("Biden", 1);

		std::cout << a << "\n";
		std::cout << b << "\n";
		b.signForm(a);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << '\n';
	}
}

static void	overloadTest(void)
{
	try
	{
		Form		a("Declaration of War", 1, 1);
		Form		a2(a);
		Form		a3;
		Bureaucrat	b("Biden", 1);

		a3 = a;
		b.signForm(a);
		std::cout << a << std::endl;
		std::cout << a2 << std::endl;
		std::cout << a3 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << '\n';
	}
}
