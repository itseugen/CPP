#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <string>

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria
{
	private:
		/*args*/
	public:
		Ice();
		virtual ~Ice();
		Ice(const Ice& copy);
		Ice& operator=(const Ice& copy);

		virtual AMateria*	clone() const;
		virtual void		use(ICharacter& target);
};

#endif /*ICE_HPP*/
