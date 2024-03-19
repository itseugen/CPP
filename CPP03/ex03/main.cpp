#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	a("Bob");

	a.printVals();
	a.attack("Oscar");
	a.whoAmI();
	a.takeDamage(12);
	a.beRepaired(22);
	a.attack("Conrad");
	a.takeDamage(200);
	a.beRepaired(10);
	return (0);
}
