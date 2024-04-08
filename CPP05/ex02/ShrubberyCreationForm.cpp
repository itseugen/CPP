#include "ShrubberyCreationForm.hpp"

/* -------------------------------------------------------------------------- */
/*                                 Exceptions                                 */
/* -------------------------------------------------------------------------- */

class	ShrubberyCreationForm::OpenFailedException : public std::exception
{
	virtual const char*	what() const throw()
	{
		return ("Cannot open output file!");
	}
};

/* -------------------------------------------------------------------------- */
/*                           Orthodox Canonical Form                          */
/* -------------------------------------------------------------------------- */

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137)
{
	std::cout << "ShrubberyCreationForm Default Constructor called" << std::endl;
	this->target = "DefaultTarget";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137)
{
	std::cout << "ShrubberyCreationForm Param Constructor called" << std::endl;
	this->target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm Default Destructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) : AForm(copy)
{
	std::cout << "ShrubberyCreationForm Copy Constructor called" << std::endl;
	if (this != &copy)
	{
		this->target = copy.target;
	}
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
	std::cout << "ShrubberyCreationForm Assignment operator called" << std::endl;
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

void	ShrubberyCreationForm::executeForm(Bureaucrat const & exec) const
{
	if (getSign() == false)
		throw AForm::FormNotSignedException();
	if (exec.getGrade() > this->getSignGrade())
		throw AForm::GradeTooLowException();
	std::string	file_name = this->target;

	file_name.append("_shrubbery");
	std::ofstream	outputFile(file_name.c_str());

	if (!outputFile.is_open())
	{
		throw OpenFailedException();
	}
	outputFile << asciiTree1();
	outputFile.close();
}

std::string	asciiTree1(void)
{
	std::string	tree;

	tree += "       _-_\n";
	tree += "    /~~   ~~\\\n";
	tree += " /~~         ~~\\\n";
	tree += "{               }\n";
	tree += " \\  _-     -_  /\n";
	tree += "   ~  \\\\ //  ~\n";
	tree += "_- -   | | _- _\n";
	tree += "  _ -  | |   -_\n";
	tree += "      // \\\\\n";
	return (tree);
}
