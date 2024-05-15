#include "RPN.hpp"

/* -------------------------------------------------------------------------- */
/*                           Orthodox Canonical Form                          */
/* -------------------------------------------------------------------------- */

RPN::RPN()
{
	std::cout << "RPN Default Constructor called" << std::endl;
}

RPN::~RPN()
{
	std::cout << "RPN Default Destructor called" << std::endl;
}

RPN::RPN(const RPN& copy)
{
	std::cout << "RPN Copy Constructor called" << std::endl;
	if (this != &copy)
	{
		this->stack = copy.stack;
	}
}

RPN&	RPN::operator=(const RPN &copy)
{
	std::cout << "RPN Copy Assignment called" << std::endl;
	if (this != &copy)
	{
		this->stack = copy.stack;
	}
	return (*this);
}

/* -------------------------------------------------------------------------- */
/*                                  Functions                                 */
/* -------------------------------------------------------------------------- */

void	RPN::calculateRPN(std::string input)
{
	
}