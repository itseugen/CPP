#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>

# include "ICharacter.hpp"

class AMateria
{
	private:
		/*args*/
	protected:
		std::string	type;
	public:
		AMateria();
		AMateria(std::string const & type);
		~AMateria();
		AMateria(const AMateria& copy);
		AMateria& operator=(const AMateria& copy);

		std::string const &	getType() const;
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter &target);
};

#endif /*AMATERIA_HPP*/