#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanA
{
public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA();
	void	attack(void);
private:
	Weapon		&weapon;
	std::string	name;
};

#endif /*HUMANB_HPP*/