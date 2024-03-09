#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
	public:
		void	announce(void);
		void	setName(std::string newName);

		Zombie(std::string name);
		Zombie(void);
		~Zombie();
	private:
		std::string	name;
};

Zombie* zombieHorde(int N, std::string name);

#endif /*ZOMBIE_HPP*/