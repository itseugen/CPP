#include "RPN.hpp"

/* -------------------------------------------------------------------------- */
/*                           Orthodox Canonical Form                          */
/* -------------------------------------------------------------------------- */

RPN::RPN()
{
	// std::cout << "RPN Default Constructor called" << std::endl;
}

RPN::~RPN()
{
	// std::cout << "RPN Default Destructor called" << std::endl;
}

RPN::RPN(const RPN& copy)
{
	// std::cout << "RPN Copy Constructor called" << std::endl;
	if (this != &copy)
	{
		this->stack = copy.stack;
	}
}

RPN&	RPN::operator=(const RPN &copy)
{
	// std::cout << "RPN Copy Assignment called" << std::endl;
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
	std::istringstream	iss(input);
	std::string			token;
	std::string			tokens[] = {"+", "-", "*", "/"};

	try
	{
		while (iss >> token)
		{
			bool	found = std::find(tokens, tokens + 4, token) != tokens + 4;
			if (found == true && stack.size() < 2)
			{
				std::cerr << "Error: Wrong input!\n";
				return ;
			}
			else if (found == true)
			{
				int	nbr2 = stack.top();
				stack.pop();
				int	nbr1 = stack.top();
				stack.pop();
				switch (token[0])
				{
					case '+':
						stack.push(nbr1 + nbr2);
						break ;
					case '-':
						stack.push(nbr1 - nbr2);
						break ;
					case '*':
						stack.push(nbr1 * nbr2);
						break ;
					case '/':
						stack.push(nbr1 / nbr2);
						break ;
				}
			}
			else
			{
				stack.push(std::stoi(token));
			}
		}
	}
	catch (const std::invalid_argument& e)
	{
		std::cerr << "Error: Invalid argument encountered.\n";
		return ;
	}
	catch (...)
	{
		std::cerr << "Unknown error occurred.\n";
		return ;
	}
	if (stack.size() != 1)
		std::cerr << "Error: Stack not empty, wrong input!\n";
	else
		std::cout << input << " = " << stack.top() << std::endl;
}
