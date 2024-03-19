#include "Animal.hpp"

/* -------------------------------------------------------------------------- */
/*                           Orthodox Canonical Form                          */
/* -------------------------------------------------------------------------- */

Animal::Animal()
{
	std::cout << "Default Constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Default Destructor called" << std::endl;
}

Animal::Animal(const Animal& copy)
{
	if (this != &copy)
		*this = copy;
}

Animal&	Animal::operator=(const Animal &copy)
{
	if (this != &copy)
	{
	}
	return (*this);
}
