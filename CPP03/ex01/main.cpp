#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	a("Steve");
	ClapTrap	b("Oscar");

	a.attack("Conrad");
	a.takeDamage(1);
	a.takeDamage(5);
	a.beRepaired(20);
	a.beRepaired(15);
	for (int i = 0; i < 8; i++)
		a.attack("Conrad");
	a.beRepaired(15);
	b.takeDamage(100);
	b.beRepaired(15);
	b.attack("Bob");
	b.takeDamage(23);
	return (0);
}
