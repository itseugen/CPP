#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	a("Bob");

	a.attack("Oscar");
	a.takeDamage(12);
	a.beRepaired(22);
	a.attack("Conrad");
	a.highFivesGuys();
	a.takeDamage(200);
	a.beRepaired(10);
	a.highFivesGuys();
	return (0);
}
