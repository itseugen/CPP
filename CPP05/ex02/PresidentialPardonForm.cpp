#include "PresidentialPardonForm.hpp"

/* -------------------------------------------------------------------------- */
/*                           Orthodox Canonical Form                          */
/* -------------------------------------------------------------------------- */

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5)
{
	std::cout << "PresidentialPardonForm Default Constructor called" << std::endl;
	this->target = "DefaultTarget";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5)
{
	std::cout << "PresidentialPardonForm Default Constructor called" << std::endl;
	this->target = target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm Default Destructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy) : AForm(copy)
{
	std::cout << "PresidentialPardonFormm Copy Constructor called" << std::endl;
	if (this != &copy)
	{
		this->target = copy.target;
	}
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm &copy)
{
	std::cout << "PresidentialPardonForm Assignment operator called" << std::endl;
	if (this != &copy)
	{
		AForm::operator=(copy);
		this->target = copy.target;
	}
	return (*this);
}

/* -------------------------------------------------------------------------- */
/*                                  Functions                                 */
/* -------------------------------------------------------------------------- */

void	PresidentialPardonForm::executeForm(Bureaucrat const & exec) const
{
	if (getSign() == false)
		throw AForm::FormNotSignedException();
	if (exec.getGrade() > this->getSignGrade())
		throw AForm::GradeTooLowException();
	std::cout << this->target << " has been pardoned by Zaphod Beeblebrox!\n";
}
