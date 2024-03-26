#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <string>

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria
{
	private:
		/*args*/
	public:
		Cure();
		~Cure();
		Cure(const Cure& copy);
		Cure& operator=(const Cure& copy);

		AMateria*	clone();
		void		use(ICharacter& target);
};

#endif /*CURE_HPP*/