#include "Brain.hpp"

/* -------------------------------------------------------------------------- */
/*                           Orthodox Canonical Form                          */
/* -------------------------------------------------------------------------- */

Brain::Brain()
{
	std::cout << "Brain Constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called" << std::endl;
}

Brain::Brain(const Brain& copy)
{
	std::cout << "Brain Copy Constructor called" << std::endl;
	if (this != &copy)
		*this = copy;
}

Brain&	Brain::operator=(const Brain &copy)
{
	std::cout << "Brain Assignment operator called" << std::endl;
	if (this != &copy)
	{
		for (int i = 0; i < 100; i++)
		{
			this->ideas[i] = copy.ideas[i];
		}
	}
	return (*this);
}

/* -------------------------------------------------------------------------- */
/*                                  Functions                                 */
/* -------------------------------------------------------------------------- */

void	Brain::newIdea(std::string idea)
{
	int	i = 0;

	while (i < 100)
	{
		if (this->ideas[i].empty())
		{
			this->ideas[i] = idea;
			return ;
		}
	}
	std::cout << "Brain is full of ideas, overriding newest idea!" << std::endl;
	this->ideas[99] = idea;
}

void	Brain::printIdeas(void)
{
	int	i = 0;

	while (!this->ideas[i].empty())
	{
		std::cout << "Idea " << i + 1 << ": " << this->ideas[i] << std::endl;
		i++;
	}
}

std::string	Brain::retIdea(int index)
{
	if (index < 0 || index > 99)
	{
		std::cout << "Index has to be between 0 and 99! Returning first idea!" << std::endl;
		return (this->ideas[0]);
	}
	return (this->ideas[index]);
}
