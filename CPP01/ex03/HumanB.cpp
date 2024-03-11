#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name)
{
	weapon = NULL;
}

HumanB::~HumanB()
{
}

void	HumanB::attack(void)
{
	if (weapon != NULL)
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	else
		std::cout << name << " attacks with their bare fist and breaks a finger" << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
