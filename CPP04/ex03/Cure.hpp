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
		Cure(const Cure& copy);
		Cure& operator=(const Cure& copy);
		virtual ~Cure();

		virtual AMateria*	clone() const;
		virtual void		use(ICharacter& target);
};

#endif /*CURE_HPP*/