#include "Dog.hpp"

/* -------------------------------------------------------------------------- */
/*                           Orthodox Canonical Form                          */
/* -------------------------------------------------------------------------- */

Dog::Dog()
{
	std::cout << "Default Constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Default Destructor called" << std::endl;
}

Dog::Dog(const Dog& copy)
{
	if (this != &copy)
		*this = copy;
}

Dog&	Dog::operator=(const Dog &copy)
{
	if (this != &copy)
	{
	}
	return (*this);
}
