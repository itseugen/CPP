#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	private:
		/*args*/
	public:
		Animal();
		~Animal();
		Animal(const Animal& copy);
		Animal& operator=(const Animal& copy);
};

#endif /*ANIMAL_HPP*/
