#include "Bureaucrat.hpp"

/* -------------------------------------------------------------------------- */
/*                           Orthodox Canonical Form                          */
/* -------------------------------------------------------------------------- */

Bureaucrat::Bureaucrat()
{
	std::cout << "Bureaucrat Default Constructor called" << std::endl;
	this->name = "DefaultName";
	this->grade = 150;
}

Bureaucrat::Bureaucrat(const std::string name, int grade)
{
	std::cout << "Bureaucrat Param Constructor called" << std::endl;
	this->name = name;
	this->grade = grade;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Default Destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy)
{
	std::cout << "Bureaucrat Copy Constructor called" << std::endl;
	if (this != &copy)
	{
		this->name = copy.name;
		this->grade = copy.grade;
	}
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat &copy)
{
	std::cout << "Bureaucrat Assignment operator called" << std::endl;
	if (this != &copy)
	{
		this->name = copy.name;
		this->grade = copy.grade;
	}
	return (*this);
}

const std::string	Bureaucrat::getName(void) const
{
	return (this->name);
}

const int	Bureaucrat::getGrade(void) const
{
	return (this->grade);
}
