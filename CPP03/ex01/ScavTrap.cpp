#include "ScavTrap.hpp"

/* -------------------------------------------------------------------------- */
/*                           Orthodox Canonical Form                          */
/* -------------------------------------------------------------------------- */

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "Default ScavTrap constructed" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
	std::cout << name << " (ScavTrap) constructed" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << this->getName() << " (ScavTrap) was destroyed" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& st) : ClapTrap(st)
{
	std::cout << "ScavTrap copy constructor called";
}

ScavTrap&	ScavTrap::operator=(const ScavTrap &st)
{
	if (this != &st)
	{
		ClapTrap::operator=(st);
		std::cout << "ScavTrap copy assignment operator called" << std::endl;
	}
	return (*this);
}

/* -------------------------------------------------------------------------- */
/*                               EX01 Functions                               */
/* -------------------------------------------------------------------------- */

void	ScavTrap::guardGate(void)
{
	std::cout << this->getName() << " (ScavTrap) is now in gate keeper mode!" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (getEnergy() > 0 && getHitPoints() > 0)
	{
		setEnergy(getEnergy() - 1);
		std::cout << "ScavTrap " << getName() << " attacks ";
		std::cout << target << ", causing " << getAttackDamage() << " points of damage!" << std::endl;
	}
	else if (getHitPoints() <= 0)
	{
		std::cout << "ScavTrap " << getName() << " is dead and can't attack!" << std::endl;
	}
	else
	{
		std::cout << "ScavTrap " << getName() << " is out of energy and can't attack ";
		std::cout << target << "." << std::endl;
	}
}
