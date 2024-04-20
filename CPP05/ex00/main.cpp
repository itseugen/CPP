#include "Bureaucrat.hpp"

static void	basicTest(void);
static void	failPro_deMotionTest(void);
static void	workPro_deMotionTest(void);
static void	overloadTest(void);

int	main(void)
{
	std::cout << "Basic Test:\n";
	basicTest();
	std::cout << "\nFailing Pro/Demotion Test:\n";
	failPro_deMotionTest();
	std::cout << "\nWorking Pro/Demotion Test:\n";
	workPro_deMotionTest();
	std::cout << "\nOverload Test:\n";
	overloadTest();
	return (0);
}

static void	basicTest(void)
{
	try
	{
		Bureaucrat	highGradeBureaucrat("HighGrade", 0);
	}
	catch (const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	try
	{
		Bureaucrat	lowGradeBureaucrat("LowGrade", 151);
	}
	catch (const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	try
	{
		Bureaucrat	workingGradeBureaucrat("WorkingGrade", 43);
	}
	catch (const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
}

static void	failPro_deMotionTest(void)
{
	try
	{
		Bureaucrat	promotionBureaucrat("Promotion", 1);

		std::cout << "Old Grade: " << promotionBureaucrat.getGrade() << std::endl;
		std::cout << "Promotion is starting:\n";
		promotionBureaucrat.incGrade();
		std::cout << "New Grade: " << promotionBureaucrat.getGrade() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << '\n';
	}
	try
	{
		Bureaucrat	demotionBureaucrat("Demotion", 150);

		std::cout << "Old Grade: " << demotionBureaucrat.getGrade() << std::endl;
		std::cout << "Demotion is starting:\n";
		demotionBureaucrat.decGrade();
		std::cout << "New Grade: " << demotionBureaucrat.getGrade() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << '\n';
	}
}

static void	workPro_deMotionTest(void)
{
	try
	{
		Bureaucrat	promotionBureaucrat("Promotion", 4);

		std::cout << "Old Grade: " << promotionBureaucrat.getGrade() << std::endl;
		std::cout << "Promotion is starting:\n";
		promotionBureaucrat.incGrade();
		std::cout << "New Grade: " << promotionBureaucrat.getGrade() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << '\n';
	}
	try
	{
		Bureaucrat	demotionBureaucrat("Demotion", 100);

		std::cout << "Old Grade: " << demotionBureaucrat.getGrade() << std::endl;
		std::cout << "Demotion is starting:\n";
		demotionBureaucrat.decGrade();
		std::cout << "New Grade: " << demotionBureaucrat.getGrade() << std::endl;
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
		Bureaucrat	a("Bob", 100);
		Bureaucrat	a2(a);
		Bureaucrat	a3;

		a3 = a;
		std::cout << a << std::endl;
		std::cout << a2 << std::endl;
		std::cout << a3 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << '\n';
	}
}
