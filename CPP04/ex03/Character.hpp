#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>

# include "ICharacter.hpp"
# include "AMateria.hpp"
class AMateria;

class Character : public ICharacter
{
	private:
		AMateria	*inv[4];
		AMateria	*ground[1024];
		std::string	name;
	public:
		Character();
		Character(std::string name);
		~Character();
		Character(const Character& copy);
		Character& operator=(const Character& copy);

		std::string const &	getName() const;
		void				equip(AMateria *m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);
};

#endif /*CHARACTER_HPP*/