#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain	*brain;
	public:
		Dog();
		~Dog();
		Dog(const Dog& copy);
		Dog& operator=(const Dog& copy);

		void		makeSound(void) const;
		void		newIdea(const std::string idea);
		void		printIdeas() const;
		std::string	retIdea(int index);
};

#endif /*DOG_HPP*/