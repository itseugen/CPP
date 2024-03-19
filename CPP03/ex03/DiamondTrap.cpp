#include "DiamondTrap.hpp"

/* -------------------------------------------------------------------------- */
/*                           Orthodox Canonical Form                          */
/* -------------------------------------------------------------------------- */

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap(), name("DefaultName")
{
	std::cout << "Default DiamonTrap constructed" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name") ,ScavTrap(name), FragTrap(name), name(name)
{
	std::cout << name << " (DiamondTrap) constructed" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << name << " (DiamondTrap) was destroyed" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &dt) : ClapTrap(dt.name + "_clap_name"), ScavTrap(dt), FragTrap(dt)
{
	std::cout << "DiamondTrap copy constructor called";
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &dt)
{
	if (this != &dt)
	{
		FragTrap::operator=(dt);
		ScavTrap::operator=(dt);
		std::cout << "DiamondTrap copy assignment operator called" << std::endl;
	}
	return (*this);
}

/* -------------------------------------------------------------------------- */
/*                               EX03 Functions                               */
/* -------------------------------------------------------------------------- */

// void	DiamondTrap::setValues()
// {
// 	// ScavTrap	scav;
// 	// FragTrap	frag;

// 	ClapTrap::hit_points = FragTrap::getHitPoints();
// 	energy_points = scav.getEnergy();
// 	_attackDamage = frag.getDamage();
// }

void	DiamondTrap::takeDamage(unsigned int amount)
{
	FragTrap::takeDamage(amount);
}

void	DiamondTrap::beRepaired(unsigned int amount)
{
	ScavTrap::beRepaired(amount);
}

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::printVals(void)
{
	std::cout << "Name: " << name << std::endl;
	std::cout << "HP: " << this->getHitPoints() << std::endl;
	std::cout << "EP: " << this->getEnergy() << std::endl;
	std::cout << "AD: " << this->getAttackDamage() << std::endl;
}

void	DiamondTrap::setVals(void)
{
	
}
