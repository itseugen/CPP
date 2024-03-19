#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

class ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap(const ClapTrap& ct);
		ClapTrap& operator=(const ClapTrap &ct);
		ClapTrap(std::string name, unsigned int hp, unsigned int ep, unsigned int at);

		void			attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		unsigned int	getEnergy(void);
		unsigned int	getHitPoints(void);
		unsigned int	getAttackDamage(void);
		void			setEnergy(unsigned int amount);
		void			setHitPoints(unsigned int amount);
		void			setAttackDamage(unsigned int amount);

		std::string	getName(void);
	private:
		std::string		name;
		unsigned int	hit_points;
		unsigned int	energy_points;
		unsigned int	attack_damage;
};

#endif /*CLAPTRAP_HPP*/