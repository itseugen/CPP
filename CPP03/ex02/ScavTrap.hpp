#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <string>
# include <iostream>

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
		/* data */
	public:
		ScavTrap();
		ScavTrap(std::string name);
		~ScavTrap();
		ScavTrap(const ScavTrap& st);
		ScavTrap& operator=(const ScavTrap &st);

		void	guardGate(void);
		void	attack(const std::string& target);
};

#endif /*SCAVTRAP_HPP*/