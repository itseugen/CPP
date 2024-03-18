#include "ScavTrap.hpp"

/* -------------------------------------------------------------------------- */
/*                           Orthodox Canonical Form                          */
/* -------------------------------------------------------------------------- */

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "Default ScavTrap constructed" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << name << " (ScavTrap) constructed" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << this->getName() << " (ScavTrap) was destroyed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& ct)
{
	if (this != &ct)
		*this = ct;
}
ClapTrap&	ClapTrap::operator=(const ClapTrap &ct)
{
	if (this != &ct)
	{
		this->name = ct.name;
		this->hit_points = ct.hit_points;
		this->energy_points = ct.energy_points;
		this->attack_damage = ct.attack_damage;
	}
	return (*this);
}
