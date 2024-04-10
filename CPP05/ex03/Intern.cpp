#include "Intern.hpp"

class	Intern::NonExistingFormNameException : public std::exception
{
	virtual const char*	what() const throw()
	{
		return ("Form name doesn't exist!");
	}
};

/* -------------------------------------------------------------------------- */
/*                           Orthodox Canonical Form                          */
/* -------------------------------------------------------------------------- */

Intern::Intern()
{
	std::cout << "Intern Default Constructor called" << std::endl;
}

Intern::~Intern()
{
	std::cout << "Intern Default Destructor called" << std::endl;
}

Intern::Intern(const Intern& copy)
{
	std::cout << "Intern Copy Constructor called" << std::endl;
	if (this != &copy)
		*this = copy;
}

Intern&	Intern::operator=(const Intern &copy)
{
	std::cout << "Intern Assignment operator called" << std::endl;
	if (this != &copy)
	{
	}
	return (*this);
}

/* -------------------------------------------------------------------------- */
/*                                  Functions                                 */
/* -------------------------------------------------------------------------- */

AForm*	Intern::makeForm(std::string form_name, std::string target)
{
	const char*	forms[] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm", NULL};
	for (int i = 0; i < 3; i++)
	{
		if (form_name == forms[i])
		{
			std::cout << "Intern creates " << forms[i] << ".\n";
			switch (i)
			{
				case 0:
					return (new PresidentialPardonForm(target));
				case 1:
					return (new RobotomyRequestForm(target));
				case 2:
					return (new ShrubberyCreationForm(target));
			}
		}
	}
	throw NonExistingFormNameException();
	return (NULL);
}
