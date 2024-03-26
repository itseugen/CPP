#include "AMateria.hpp"

/* -------------------------------------------------------------------------- */
/*                           Orthodox Canonical Form                          */
/* -------------------------------------------------------------------------- */

AMateria::AMateria()
{
	std::cout << "AMateria Constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type)
{
	this->type = type;
	std::cout << "AMateria Constructor called" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "AMateria Destructor called" << std::endl;
}

AMateria::AMateria(const AMateria& copy)
{
	std::cout << "AMateria Copy Constructor called" << std::endl;
	if (this != &copy)
		*this = copy;
}

AMateria&	AMateria::operator=(const AMateria &copy)
{
	std::cout << "AMateria Assignment operator called" << std::endl;
	if (this != &copy)
	{
		this->type = copy.type;
	}
	return (*this);
}

/* -------------------------------------------------------------------------- */
/*                                  Functions                                 */
/* -------------------------------------------------------------------------- */

std::string const &	AMateria::getType() const
{
	return (this->type);
}

// AMateria*	AMateria::clone() const
// {

// }