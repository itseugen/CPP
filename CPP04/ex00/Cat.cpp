#include "Cat.hpp"

/* -------------------------------------------------------------------------- */
/*                           Orthodox Canonical Form                          */
/* -------------------------------------------------------------------------- */

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat Constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
}

Cat::Cat(const Cat& copy) : Animal(copy)
{
	if (this != &copy)
		*this = copy;
}

Cat&	Cat::operator=(const Cat &copy)
{
	if (this != &copy)
	{
		Animal::operator=(copy);
	}
	return (*this);
}
