#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <string>
# include <iostream>

# include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
	private:
		/* data */
	public:
		FragTrap();
		FragTrap(std::string name);
		~FragTrap();
		FragTrap(const FragTrap& ft);
		FragTrap& operator=(const FragTrap &ft);

		void	highFivesGuys(void);
		void	attack(const std::string& target);
};

#endif /*FRAGTRAP_HPP*/