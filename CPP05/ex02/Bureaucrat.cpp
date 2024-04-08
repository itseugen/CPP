#include "Bureaucrat.hpp"

/* -------------------------------------------------------------------------- */
/*                                 Exceptions                                 */
/* -------------------------------------------------------------------------- */

class	Bureaucrat::GradeTooHighException : public std::exception
{
	virtual const char*	what() const throw()
	{
		return ("Grade is too high!");
	}
};

class Bureaucrat::GradeTooLowException : public std::exception
{
	virtual const char*	what() const throw()
	{
		return ("Grade is too low!");
	}
};

/* -------------------------------------------------------------------------- */
/*                           Orthodox Canonical Form                          */
/* -------------------------------------------------------------------------- */

Bureaucrat::Bureaucrat() : name("DefaultName")
{
	std::cout << "Bureaucrat Default Constructor called" << std::endl;
	// this->name = "DefaultName";
	this->grade = 150;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name)
{
	std::cout << "Bureaucrat Param Constructor called" << std::endl;
	// this->name = name;
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	this->grade = grade;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Default Destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) : name(copy.getName())
{
	std::cout << "Bureaucrat Copy Constructor called" << std::endl;
	if (this != &copy)
	{
		// this->name = copy.getName();
		this->grade = copy.grade;
	}
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat &copy)
{
	std::cout << "Bureaucrat Assignment operator called" << std::endl;
	if (this != &copy)
	{
		// this->name = copy.name;
		this->grade = copy.grade;
	}
	return (*this);
}

/* -------------------------------------------------------------------------- */
/*                                  Functions                                 */
/* -------------------------------------------------------------------------- */

const std::string	Bureaucrat::getName(void) const
{
	return (this->name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

void	Bureaucrat::incGrade(void)
{
	this->grade -= 1;
	if (this->grade < 1)
		throw GradeTooHighException();
}

void	Bureaucrat::decGrade(void)
{
	this->grade += 1;
	if (this->grade > 150)
		throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream&out, const Bureaucrat& b)
{
	out << b.getName() << ", Grade: " << b.getGrade();
	return (out);
}

void	Bureaucrat::signForm(AForm& f)
{
	// if (f.getSign() == true)
	// 	std::cout << this->getName() << " couldn't sign the " << f.getName() << " because it is already signed!\n";
	// else if (f.getSignGrade() < this->getGrade())
	// 	std::cout << this->getName() << " couldn't sign the " << f.getName() << " because it's grade is too low!\n";
	// else
	// 	std::cout << this->getName() << " signed the " << f.getName() << "!\n";
	try
	{
		f.beSigned(*this);
		std::cout << this->getName() << " signed the " << f.getName() << "!\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << this->getName() << " couldn't sign the " << f.getName() << " because " << e.what() << "\n";
	}
}
