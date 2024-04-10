#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

static void	internTest(void);

int	main(void)
{
	std::cout << "Intern Test:\n";
	internTest();
	return (0);
}

static void	internTest(void)
{
	try
	{
		std::cout << "Test 01:\n";
		Intern	a;
		AForm	*b = a.makeForm("IDontExist", "Bob");

		delete	b;
	}
	catch (const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	try
	{
		std::cout << "\n\nTest 02:\n";
		Intern	a;

		AForm	*b = a.makeForm("PresidentialPardonForm", "Al Capone");
		AForm	*c = a.makeForm("RobotomyRequestForm", "Voldemort");
		AForm	*d = a.makeForm("ShrubberyCreationForm", "Planet Earth");

		Bureaucrat	e("Obama", 1);
		e.signForm(*b);
		e.signForm(*c);
		e.signForm(*d);
		e.executeForm(*b);
		e.executeForm(*c);
		e.executeForm(*d);
		delete b;
		delete c;
		delete d;
	}
	catch (const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
}
