#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>

# include "Animal.hpp"

class Dog : public Animal
{
	private:
		/*args*/
	public:
		Dog();
		~Dog();
		Dog(const Dog& copy);
		Dog& operator=(const Dog& copy);

		void	makeSound(void) const;
};

#endif /*DOG_HPP*/