#include "Animal.hpp"

/* -------------------------------------------------------------------------- */
/*                           Orthodox Canonical Form                          */
/* -------------------------------------------------------------------------- */

Animal::Animal()
{
	std::cout << "Animal Constructor called" << std::endl;
	this->type = "Uninitialzed";
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called" << std::endl;
}

Animal::Animal(std::string type)
{
	std::cout << "Animal Name-Constructor called" << std::endl;
	this->type = type;
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
		this->type = copy.type;
	}
	return (*this);
}

/* -------------------------------------------------------------------------- */
/*                                  Functions                                 */
/* -------------------------------------------------------------------------- */

void	Animal::makeSound(void) const
{
	std::cout << "Animal noises\n";
}
