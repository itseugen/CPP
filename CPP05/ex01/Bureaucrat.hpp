#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class Bureaucrat
{
	private:
		const std::string	name;
		int					grade;
	public:
		Bureaucrat();
		Bureaucrat(const std::string name, int grade);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat& copy);
		Bureaucrat& operator=(const Bureaucrat& copy);

		class	GradeTooHighException;
		class	GradeTooLowException;

		const std::string	getName(void) const;
		int					getGrade(void) const;
		void				incGrade(void);
		void				decGrade(void);
};

std::ostream& operator<<(std::ostream&out, const Bureaucrat& b);

#endif /*BUREAUCRAT_HPP*/