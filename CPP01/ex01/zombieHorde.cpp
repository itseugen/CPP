#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	if (N <= 0)
	{
		std::cout << "N has to be bigger than 0" << std::endl;
	}
	Zombie *p = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		std::stringstream	ss;
		ss << name << i;
		p[i].setName(ss.str());
	}
	return (p);
}
