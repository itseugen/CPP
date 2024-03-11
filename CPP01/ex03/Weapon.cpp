#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	// std::cout << "Default Zombie constructed" << std::endl;
	setType(type);
}

Weapon::~Weapon(void)
{

}

const std::string&	Weapon::getType(void) const
{
	const std::string	&ref = type;

	return (ref);
}

void	Weapon::setType(std::string str)
{
	type = str;
}
