#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << name << ": constructed" << std::endl;
}

Zombie::Zombie(void)
{
	std::cout << "Default Zombie constructed" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << name << " got destroyed" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << name;
	std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string newName)
{
	name = newName;
}
