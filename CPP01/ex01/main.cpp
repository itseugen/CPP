#include "Zombie.hpp"

int	main(void)
{
	int	N = 5;
	std::string	name = "Zombiiiiii";
	Zombie	*p;

	p = zombieHorde(N, name);
	for (int i = 0; i < N; i++)
	{
		p[i].announce();
	}
	std::cout << "Changing Name of number 0:" << std::endl;
	p[0].setName("WonderfulNewName");
	p[0].announce();
	delete[] p;
	return (0);
}
