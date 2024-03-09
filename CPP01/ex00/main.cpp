#include "Zombie.hpp"

int	main(void)
{
	Zombie	*p;

	randomChump("StackZombie");
	std::cout << "---------" << std::endl;
	p = newZombie("DynamicZombie");
	p->announce();
	delete p;
	return (0);
}
