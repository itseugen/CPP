#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>

# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string	name;
		const int			sign_grade;
		const int			exec_grade;
		bool				sign;
	public:
		AForm();
		AForm(std::string name, int sign_grade, int exec_grade);
		~AForm();
		AForm(const Form& copy);
		AForm& operator=(const Form& copy);

		class	GradeTooHighException;
		class	GradeTooLowException;
		class	FormAlreadySignedException;

		const std::string	getName(void) const;
		bool				getSign(void) const;
		int					getSignGrade(void) const;
		int					getExecGrade(void) const;

		void				beSigned(const Bureaucrat& b);
};

std::ostream& operator<<(std::ostream&out, const Form& f);

#endif /*FORM_HPP*/