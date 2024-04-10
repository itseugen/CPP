#include "RobotomyRequestForm.hpp"

/* -------------------------------------------------------------------------- */
/*                           Orthodox Canonical Form                          */
/* -------------------------------------------------------------------------- */

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{
	std::cout << "RobotomyRequestForm Default Constructor called" << std::endl;
	this->target = "DefaultTarget";
	srand(static_cast<unsigned int>(time(NULL)));
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45)
{
	std::cout << "RobotomyRequestForm Default Constructor called" << std::endl;
	this->target = target;
	srand(static_cast<unsigned int>(time(NULL)));
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm Default Destructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) : AForm(copy)
{
	std::cout << "RobotomyRequestForm Copy Constructor called" << std::endl;
	if (this != &copy)
	{
		this->target = copy.target;
	}
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm &copy)
{
	std::cout << "RobotomyRequestForm Assignment operator called" << std::endl;
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

void	RobotomyRequestForm::executeForm(Bureaucrat const & exec) const
{
	if (getSign() == false)
		throw AForm::FormNotSignedException();
	if (exec.getGrade() > this->getSignGrade())
		throw AForm::GradeTooLowException();
	std::cout << "*** BZZZZZZ ***\n";

	int	random_number = rand() % 2;
	if (random_number == 0)
		std::cout << this->target << " has been successfully robotomized!\n";
	else if (random_number == 1)
		std::cout << "The robotomization failed on " << this->target << "!\n";
	else
		std::cout << "The randomizer failed spectaculary!\n";
}
