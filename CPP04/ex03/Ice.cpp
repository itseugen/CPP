#include "Ice.hpp"

/* -------------------------------------------------------------------------- */
/*                           Orthodox Canonical Form                          */
/* -------------------------------------------------------------------------- */

Ice::Ice()
{
	AMateria::type = "ice";
	std::cout << "Ice Constructor called" << std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice Destructor called" << std::endl;
}

Ice::Ice(const Ice& copy) : AMateria(copy)
{
	std::cout << "Ice Copy Constructor called" << std::endl;
	// if (this != &copy)
	// 	*this = copy;
}

Ice&	Ice::operator=(const Ice &copy)
{
	std::cout << "Ice Assignment operator called" << std::endl;
	if (this != &copy)
	{
		AMateria::operator=(copy);
	}
	return (*this);
}

/* -------------------------------------------------------------------------- */
/*                                  Functions                                 */
/* -------------------------------------------------------------------------- */

AMateria*	Ice::clone()
{
	Ice*	a;

	a = new Ice();
	return (a);
}
