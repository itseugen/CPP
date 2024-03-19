#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include <string>

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private:
		/*args*/
	public:
		WrongCat();
		~WrongCat();
		WrongCat(const WrongCat& copy);
		WrongCat& operator=(const WrongCat& copy);

		void	makeSound(void) const;
};

#endif /*WRONGCAT_HPP*/