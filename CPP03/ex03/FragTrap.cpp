#include "FragTrap.hpp"

/* -------------------------------------------------------------------------- */
/*                           Orthodox Canonical Form                          */
/* -------------------------------------------------------------------------- */

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "Default FragTrap constructed" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
	std::cout << name << " (FragTrap) constructed" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << this->getName() << " (FragTrap) was destroyed" << std::endl;
}

FragTrap::FragTrap(const FragTrap &ft) : ClapTrap(ft)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &ft)
{
	if (this != &ft)
	{
		ClapTrap::operator=(ft);
		std::cout << "FragTrap copy assignment operator called" << std::endl;
	}
	return (*this);
}

/* -------------------------------------------------------------------------- */
/*                               EX01 Functions                               */
/* -------------------------------------------------------------------------- */

void	FragTrap::attack(const std::string &target)
{
	if (getEnergy() > 0 && getHitPoints() > 0)
	{
		setEnergy(getEnergy() - 1);
		std::cout << "FragTrap " << getName() << " attacks ";
		std::cout << target << ", causing " << getAttackDamage() << " points of damage!" << std::endl;
	}
	else if (getHitPoints() <= 0)
	{
		std::cout << "FragTrap " << getName() << " is dead and can't attack!" << std::endl;
	}
	else
	{
		std::cout << "FragTrap " << getName() << " is out of energy and can't attack ";
		std::cout << target << "." << std::endl;
	}
}

void	FragTrap::highFivesGuys(void)
{
	if (getHitPoints() > 0)
		std::cout << getName() << " wants a high five!" << " (｡◕‿◕｡)" << std::endl;
	else
		std::cout << getName() << " is dead and can't ask for high fives :(" << std::endl;
}
