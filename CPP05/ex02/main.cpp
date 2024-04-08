#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

static void	shrubberyTest(void);
// static void	failSign(void);
// static void	workSign(void);
// static void	overloadTest(void);

int	main(void)
{
	std::cout << "Shrubbery Test:\n";
	shrubberyTest();
	// std::cout << "\nFailing Signing Test:\n";
	// failSign();
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

// static void	failSign(void)
// {
// 	try
// 	{
// 		Form		a("Financial Support", 1, 3);
// 		Bureaucrat	b("Bob", 34);

// 		b.signForm(a);
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << "Exception: " << e.what() << '\n';
// 	}
// 	try
// 	{
// 		Form		a("Child Support", 56, 56);
// 		Bureaucrat	b("Bob", 34);

// 		b.signForm(a);
// 		b.signForm(a);
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << "Exception: " << e.what() << '\n';
// 	}
// }

// static void	workSign(void)
// {
// 	try
// 	{
// 		Form		a("Declaration of War", 1, 1);
// 		Bureaucrat	b("Biden", 1);

// 		std::cout << a << "\n";
// 		std::cout << b << "\n";
// 		b.signForm(a);
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << "Exception: " << e.what() << '\n';
// 	}
// }

// static void	overloadTest(void)
// {
// 	try
// 	{
// 		Form		a("Declaration of War", 1, 1);
// 		Form		a2(a);
// 		Form		a3;
// 		Bureaucrat	b("Biden", 1);

// 		a3 = a;
// 		b.signForm(a);
// 		std::cout << a << std::endl;
// 		std::cout << a2 << std::endl;
// 		std::cout << a3 << std::endl;
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << "Exception: " << e.what() << '\n';
// 	}
// }
