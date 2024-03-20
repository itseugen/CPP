#include "Dog.hpp"

/* -------------------------------------------------------------------------- */
/*                           Orthodox Canonical Form                          */
/* -------------------------------------------------------------------------- */

Dog::Dog()
{
	Animal::type = "Dog";
	this->brain = new Brain;
	std::cout << "Dog Constructor called" << std::endl;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog Destructor called" << std::endl;
}

Dog::Dog(const Dog& copy) : Animal(copy), brain(new Brain(*(copy.brain)))
{
	if (this != &copy)
	{
		*this = copy;
		// *this->brain = *copy.brain;
	}
}

Dog&	Dog::operator=(const Dog &copy)
{
	if (this != &copy)
	{
		Animal::operator=(copy);
		// this->brain = copy.brain;
		delete brain; // Delete existing brain
		brain = new Brain(*(copy.brain));
	}
	return (*this);
}

/* -------------------------------------------------------------------------- */
/*                                  Functions                                 */
/* -------------------------------------------------------------------------- */

void	Dog::makeSound(void) const
{
	std::cout << "Wooof Wooof!\n";
}


void	Dog::newIdea(const std::string idea)
{
	brain->newIdea(idea);
}

void	Dog::printIdeas() const
{
	brain->printIdeas();
}

std::string	Dog::retIdea(int index)
{
	return (brain->retIdea(index));
}
