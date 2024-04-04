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

		const std::string	getName(void) const;
		const int			getGrade(void) const;
};

#endif /*BUREAUCRAT_HPP*/