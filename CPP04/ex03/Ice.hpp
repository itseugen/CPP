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
		~Ice();
		Ice(const Ice& copy);
		Ice& operator=(const Ice& copy);

		AMateria*	clone() const;
		void		use(ICharacter& target);
};

#endif /*ICE_HPP*/
