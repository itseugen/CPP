#include "Zombie.hpp"

Zombie*	newZombie(std::string name)
{
	Zombie*	p1 = new Zombie(name);

	return (p1);
}
