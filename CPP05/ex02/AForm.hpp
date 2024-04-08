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
		virtual ~AForm();
		AForm(const AForm& copy);
		AForm& operator=(const AForm& copy);

		class	GradeTooHighException;
		class	GradeTooLowException;
		class	FormAlreadySignedException;

		const std::string	getName(void) const;
		bool				getSign(void) const;
		int					getSignGrade(void) const;
		int					getExecGrade(void) const;

		virtual void		beSigned(const Bureaucrat& b) = 0;
};

std::ostream& operator<<(std::ostream&out, const AForm& f);

#endif /*FORM_HPP*/