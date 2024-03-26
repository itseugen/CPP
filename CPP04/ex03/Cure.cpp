#include "Cure.hpp"

/* -------------------------------------------------------------------------- */
/*                           Orthodox Canonical Form                          */
/* -------------------------------------------------------------------------- */

Cure::Cure()
{
	AMateria::type = "cure";
	std::cout << "Cure Constructor called" << std::endl;
}

Cure::~Cure()
{
	std::cout << "Cure Destructor called" << std::endl;
}

Cure::Cure(const Cure& copy) : AMateria(copy)
{
	std::cout << "Cure Copy Constructor called" << std::endl;
	// if (this != &copy)
	// 	*this = copy;
}

Cure&	Cure::operator=(const Cure &copy)
{
	std::cout << "Cure Assignment operator called" << std::endl;
	if (this != &copy)
	{
		AMateria::operator=(copy);
	}
	return (*this);
}

/* -------------------------------------------------------------------------- */
/*                                  Functions                                 */
/* -------------------------------------------------------------------------- */

AMateria*	Cure::clone()
{
	Cure*	a;

	a = new Cure();
	return (a);
}
