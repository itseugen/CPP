#include "Character.hpp"

/* -------------------------------------------------------------------------- */
/*                           Orthodox Canonical Form                          */
/* -------------------------------------------------------------------------- */

Character::Character()
{
	this->name = "NoName";
	std::cout << "Character Constructor called" << std::endl;
}

Character::Character(std::string name)
{
	this->name = name;
	std::cout << "Character Constructor called" << std::endl;
}

Character::~Character()
{
	std::cout << "Character Destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		delete inv[i];
	}
}

Character::Character(const Character& copy)
{
	std::cout << "Character Copy Constructor called" << std::endl;
	if (this != &copy)
	{
		*this = copy;
		// for (int i = 0; i < 4; i++)
		// {
		// 	this->inv[i] = copy.inv[i];
		// }
		// this->name = copy.name;
	}
}

Character&	Character::operator=(const Character &copy)
{
	std::cout << "Character Assignment operator called" << std::endl;
	if (this != &copy)
	{
		this->name = copy.name;
		for (int i = 0; i < 4; i++)
			delete inv[i];
		for (int i = 0; i < 4; i++)
		{
			this->inv[i] = copy.inv[i];
		}
	}
	return (*this);
}

/* -------------------------------------------------------------------------- */
/*                                  Functions                                 */
/* -------------------------------------------------------------------------- */

std::string const &	Character::getName() const
{
	return (this->name);
}

void	Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->inv[i])
		{
			this->inv[i] = m;
			std::cout << this->name << ": Equiped item on slot: " << i << std::endl;
			break ;
		}
	}
	std::cout << name << ": Inventory full, Item wasn't equiped!" << std::endl;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << name << ": ";
		std::cout << "Intex out of bound, input number between 0 and 3!" << std::endl;
		return ;
	}
	this->inv[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	AMateria::use(target);
}
