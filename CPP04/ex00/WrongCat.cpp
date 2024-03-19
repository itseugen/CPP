#include "WrongCat.hpp"

/* -------------------------------------------------------------------------- */
/*                           Orthodox Canonical Form                          */
/* -------------------------------------------------------------------------- */

WrongCat::WrongCat()
{
	std::cout << "WrongCat Constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy)
{
	std::cout << "Copy Constructor called" << std::endl;
	if (this != &copy)
		*this = copy;
}

WrongCat&	WrongCat::operator=(const WrongCat &copy)
{
	std::cout << "Assignment operator called" << std::endl;
	if (this != &copy)
	{
		WrongAnimal::operator=(copy);
	}
	return (*this);
}
