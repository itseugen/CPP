#include "MateriaSource.hpp"

/* -------------------------------------------------------------------------- */
/*                           Orthodox Canonical Form                          */
/* -------------------------------------------------------------------------- */

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource Constructor called" << std::endl;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource Destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		delete mem[i];
	}
}

MateriaSource::MateriaSource(const MateriaSource& copy)
{
	std::cout << "MateriaSource Copy Constructor called" << std::endl;
	if (this != &copy)
		*this = copy;
}

MateriaSource&	MateriaSource::operator=(const MateriaSource &copy)
{
	std::cout << "MateriaSource Assignment operator called" << std::endl;
	if (this != &copy)
	{
		for (int i = 0; i < 4; i++)
			delete mem[i];
		for (int i = 0; i < 4; i++)
		{
			this->mem[i] = copy.mem[i];
		}
	}
	return (*this);
}

/* -------------------------------------------------------------------------- */
/*                                  Functions                                 */
/* -------------------------------------------------------------------------- */

void	MateriaSource::learnMateria(AMateria* learn)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->mem[i])
		{
			this->mem[i] = learn;
			std::cout << "Learned Materia on slot: " << i << std::endl;
			break ;
		}
	}
	std::cout << "Memory full, Materia wasn't learned!" << std::endl;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	if (type == "ice")
	{
		for (int i = 0; i < 4; i++)
		{
			if (mem[i]->getType() == "ice")
			{
				AMateria*	a = mem[i];
				return (a);
			}
		}
	}
	else if (type == "cure")
	{
		for (int i = 0; i < 4; i++)
		{
			if (mem[i]->getType() == "cure")
			{
				AMateria*	a = mem[i];
				return (a);
			}
		}
	}
	return (NULL);
}
