#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>

class Dog
{
	private:
		/*args*/
	public:
		Dog();
		~Dog();
		Dog(const Dog& copy);
		Dog& operator=(const Dog& copy);
};

#endif /*DOG_HPP*/