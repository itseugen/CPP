#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>

# include "AForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
	private:
		/*args*/
	public:
		Intern();
		~Intern();
		Intern(const Intern& copy);
		Intern& operator=(const Intern& copy);

		AForm*	makeForm(std::string form_name, std::string target);

		class	NonExistingFormNameException;
};

#endif /*INTERN_HPP*/