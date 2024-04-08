#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

static void	shrubberyTest(void);
static void	robotomyTest(void);
// static void	workSign(void);
// static void	overloadTest(void);

int	main(void)
{
	std::cout << "Shrubbery Test:\n";
	shrubberyTest();
	std::cout << "\nRobotomy Test:\n";
	robotomyTest();
	// std::cout << "\nWorking Signing Test:\n";
	// workSign();
	// std::cout << "\nOverload Test:\n";
	// overloadTest();
	return (0);
}

static void	shrubberyTest(void)
{
	try
	{
		ShrubberyCreationForm	a("Wonderful");
		Bureaucrat				tooLow("Bob", 150);
		Bureaucrat				b("Steve", 5);

		tooLow.executeForm(a);
		b.executeForm(a);
	}
	catch (const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	try
	{
		ShrubberyCreationForm	a("Wonderful");
		Bureaucrat				tooLow("Bob", 150);
		Bureaucrat				b("Steve", 5);

		tooLow.signForm(a);
		b.signForm(a);
		b.signForm(a);
		tooLow.signForm(a);
		tooLow.executeForm(a);
		b.executeForm(a);
	}
	catch (const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
}

static void	robotomyTest(void)
{
	try
	{
		RobotomyRequestForm	a("Darth Vader");
		Bureaucrat			tooLow("Han Solo", 73);
		Bureaucrat			b("Luke Skywalker", 2);

		tooLow.executeForm(a);
		b.executeForm(a);
	}
	catch (const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	try
	{
		RobotomyRequestForm	a("Darth Vader");
		RobotomyRequestForm	p("Palpatine");
		Bureaucrat			tooLow("Han Solo", 73);
		Bureaucrat			b("Luke Skywalker", 2);

		tooLow.signForm(a);
		b.signForm(a);
		b.signForm(a);
		b.signForm(p);
		tooLow.signForm(a);
		tooLow.executeForm(a);
		b.executeForm(a);
		b.executeForm(a);
		b.executeForm(a);
		b.executeForm(p);
	}
	catch (const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
}
