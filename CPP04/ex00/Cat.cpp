#include "Cat.hpp"

/* -------------------------------------------------------------------------- */
/*                           Orthodox Canonical Form                          */
/* -------------------------------------------------------------------------- */

Cat::Cat()
{
	std::cout << "Default Constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Default Destructor called" << std::endl;
}

Cat::Cat(const Cat& copy)
{
	if (this != &copy)
		*this = copy;
}

Cat&	Cat::operator=(const Cat &copy)
{
	if (this != &copy)
	{
	}
	return (*this);
}
