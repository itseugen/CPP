#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain	*brain;
	public:
		Cat();
		~Cat();
		Cat(const Cat& copy);
		Cat& operator=(const Cat& copy);

		void		makeSound(void) const;
		void		newIdea(const std::string idea);
		void		printIdeas() const;
		std::string	retIdea(int index);
};

#endif /*CAT_HPP*/