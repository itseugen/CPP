#include "AForm.hpp"

/* -------------------------------------------------------------------------- */
/*                                 Exceptions                                 */
/* -------------------------------------------------------------------------- */

class	AForm::GradeTooHighException : public std::exception
{
	virtual const char*	what() const throw()
	{
		return ("Grade is too high!");
	}
};

class AForm::GradeTooLowException : public std::exception
{
	virtual const char*	what() const throw()
	{
		return ("Grade is too low!");
	}
};

class	AForm::FormAlreadySignedException : public std::exception
{
	virtual const char*	what() const throw()
	{
		return ("the Form is already signed!");
	}
};


/* -------------------------------------------------------------------------- */
/*                           Orthodox Canonical Form                          */
/* -------------------------------------------------------------------------- */

AForm::AForm() : name("DefaultForm"), sign_grade(1), exec_grade(1), sign(false)
{
	std::cout << "Form Default Constructor called" << std::endl;
}

AForm::AForm(std::string name, int sign_grade, int exec_grade) : name(name), sign_grade(sign_grade), exec_grade(exec_grade), sign(false)
{
	std::cout << "Form Param Constructor called" << std::endl;
	if (this->sign_grade < 1 || this->exec_grade < 1)
		throw GradeTooHighException();
	if (this->sign_grade > 150 || this->exec_grade > 150)
		throw GradeTooLowException();
}

AForm::~AForm()
{
	std::cout << "Form Default Destructor called" << std::endl;
}

AForm::AForm(const Form& copy) : name(copy.getName()), sign_grade(copy.getSignGrade()), exec_grade(copy.getExecGrade()), sign(copy.getSign())
{
	std::cout << "Form Copy Constructor called" << std::endl;
	if (this != &copy)
	{
	}
}

AForm&	AForm::operator=(const Form &copy)
{
	std::cout << "Form Assignment operator called" << std::endl;
	if (this != &copy)
	{
		this->sign = copy.sign;
	}
	return (*this);
}

/* -------------------------------------------------------------------------- */
/*                               Getters/Setters                              */
/* -------------------------------------------------------------------------- */

const std::string	AForm::getName(void) const
{
	return (this->name);
}

bool	AForm::getSign(void) const
{
	return (this->sign);
}

int	AForm::getSignGrade(void) const
{
	return (this->sign_grade);
}

int	AForm::getExecGrade(void) const
{
	return (this->exec_grade);
}

std::ostream& operator<<(std::ostream&out, const Form& f)
{
	out << "The form " << f.getName() << " is ";
	if (f.getSign() == true)
		out << "signed.\n";
	else
		out << "not signed.\n";
	out << "To sign you need to be at least grade " << f.getSignGrade() << ".\n";
	out << "To execute you need to be at least grade " << f.getExecGrade() << ".\n";
	return (out);
}

/* -------------------------------------------------------------------------- */
/*                                  Functions                                 */
/* -------------------------------------------------------------------------- */

void	AForm::beSigned(const Bureaucrat& b)
{
	if (getSign() == true)
	{
		// std::cout << "Form " << this->getName() << " is already signed!\n";
		// return ;
		throw FormAlreadySignedException();
	}
	if (b.getGrade() > this->getSignGrade())
		throw GradeTooLowException();
	else
		this->sign = true;
	// std::cout << b.getName() << " signed " << this->getName() << ".\n";
}
