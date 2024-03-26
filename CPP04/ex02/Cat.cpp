#include "Cat.hpp"

/* -------------------------------------------------------------------------- */
/*                           Orthodox Canonical Form                          */
/* -------------------------------------------------------------------------- */

Cat::Cat() : brain(new Brain())
{
	this->type = "Cat";
	std::cout << "Cat Constructor called" << std::endl;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat Destructor called" << std::endl;
}

Cat::Cat(const Cat& copy) : Animal(copy), brain(new Brain(*(copy.brain)))
{
}

Cat&	Cat::operator=(const Cat &copy)
{
	if (this != &copy)
	{
		Animal::operator=(copy);
		delete brain;
		brain = new Brain(*(copy.brain));
	}
	return (*this);
}

/* -------------------------------------------------------------------------- */
/*                                  Functions                                 */
/* -------------------------------------------------------------------------- */

void	Cat::makeSound(void) const
{
	std::cout << "Meow Meow!\n";
}

void	Cat::newIdea(const std::string idea)
{
	brain->newIdea(idea);
}

void	Cat::printIdeas() const
{
	brain->printIdeas();
}

std::string	Cat::retIdea(int index)
{
	return (brain->retIdea(index));
}
