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

		class	GradeTooHighException : public std::exception
		{
			virtual const char*	what() const throw()
			{
				return ("Grade is too high!");
			}
		};
		class	GradeTooLowException : public std::exception
		{
			virtual const char*	what() const throw()
			{
				return ("Grade is too low!");
			}
		};
		class	FormAlreadySignedException : public std::exception
		{
			virtual const char*	what() const throw()
			{
				return ("the Form is already signed!");
			}
		};
		class	FormNotSignedException : public std::exception
		{
			virtual const char*	what() const throw()
			{
				return ("the Form is not signed!");
			}
		};

		const std::string	getName(void) const;
		bool				getSign(void) const;
		int					getSignGrade(void) const;
		int					getExecGrade(void) const;

		void				beSigned(const Bureaucrat& b);

		virtual void		executeForm(Bureaucrat const & exec) const = 0;
};

std::ostream& operator<<(std::ostream&out, const AForm& f);

#endif /*FORM_HPP*/