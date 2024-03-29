#include "AMateria.hpp"

/* -------------------------------------------------------------------------- */
/*                           Orthodox Canonical Form                          */
/* -------------------------------------------------------------------------- */

AMateria::AMateria()
{
	std::cout << "AMateria Constructor called" << std::endl;
	this->type = "Default";
}

AMateria::AMateria(std::string const & type)
{
	std::cout << "AMateria Constructor called" << std::endl;
	this->type = type;
}

AMateria::~AMateria()
{
	std::cout << "AMateria Destructor called" << std::endl;
}

AMateria::AMateria(const AMateria& copy)
{
	std::cout << "AMateria Copy Constructor called" << std::endl;
	if (this != &copy)
		this->type = copy.type;
		// *this = copy;
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

void	AMateria::use(ICharacter& target)
{
	std::cout << "use msg" << &target << "\n";
}