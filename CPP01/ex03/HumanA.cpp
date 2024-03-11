#include "HumanA.hpp"

//Using a reference to Weapon here, since I do not need to change the weapon
//A pointer would be ideal if I want to change the weapon ->see Human B

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon)
{
}

HumanA::~HumanA()
{
}

void	HumanA::attack(void)
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
