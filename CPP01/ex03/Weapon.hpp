#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>

class Weapon
{
	public:
		Weapon(std::string type);
		~Weapon();	
		const std::string&	getType(void) const;
		void				setType(std::string str);
	private:
		std::string			type;
};

#endif /*WEAPON_HPP*/