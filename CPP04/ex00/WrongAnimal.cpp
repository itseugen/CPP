#include "WrongAnimal.hpp"

/* -------------------------------------------------------------------------- */
/*                           Orthodox Canonical Form                          */
/* -------------------------------------------------------------------------- */

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal Constructor called" << std::endl;
	this->type = "Uninitialzed";
}

WrongAnimal::WrongAnimal(std::string type)
{
	std::cout << "WrongAnimal Name-Constructor called" << std::endl;
	this->type = type;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
	std::cout << "Copy Constructor called" << std::endl;
	if (this != &copy)
		*this = copy;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal &copy)
{
	std::cout << "Assignment operator called" << std::endl;
	if (this != &copy)
	{
		this->type = copy.type;
	}
	return (*this);
}

std::string	Animal::getType(void) const
{
	return (this->type);
}
