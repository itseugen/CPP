#include "ClapTrap.hpp"

/* -------------------------------------------------------------------------- */
/*                           Orthodox Canonical Form                          */
/* -------------------------------------------------------------------------- */

ClapTrap::ClapTrap()
{
	std::cout << "Default ClapTrap constructed" << std::endl;
	this->name = "DefaultName";
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << this->name << " (ClapTrap) was destroyed" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	std::cout << name << " (ClapTrap) constructed" << std::endl;
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
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

/* -------------------------------------------------------------------------- */
/*                               EX00 Functions                               */
/* -------------------------------------------------------------------------- */

void	ClapTrap::attack(const std::string& target)
{
	if (this->energy_points > 0 && this->hit_points > 0)
	{
		this->energy_points--;
		std::cout << "ClapTrap " << this->name << " attacks ";
		std::cout << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
	}
	else if (this->hit_points <= 0)
	{
		std::cout << "ClapTrap " << this->name << " is dead and can't attack!" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << this->name << " is out of energy and can't attack ";
		std::cout << target << "." << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hit_points <= 0)
	{
		std::cout << "ClapTrap " << this->name << " is already dead and can't take more damage!" << std::endl;
	}
	else if (amount > this->hit_points)
	{
		std::cout << "ClapTrap " << this->name << " takes " << this->hit_points << " amount of damage.";
		std::cout << " The ClapTrap is dead. " << amount - this->hit_points << " damage is wasted on " << this->name << "." << std::endl;
		this->hit_points = 0;
	}
	else
	{
		std::cout << "ClapTrap " << this->name << " takes " << amount << " amount of damage. ";
		this->hit_points -= amount;
		std::cout << this->hit_points << " hit points remain for " << this->name << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy_points > 0 && this->hit_points > 0)
	{
		this->energy_points--;
		std::cout << "ClapTrap " << this->name << " is reparing itself with " << amount << " points. ";
		this->hit_points += amount;
		std::cout << this->name << " now has " << this->hit_points << " hit points!" << std::endl;
	}
	else if (this->hit_points <= 0)
	{
		std::cout << "ClapTrap " << this->name << " is already dead and can't repair itself!" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << this->name << " is out of energy and can't repair!" << std::endl;
	}
}
