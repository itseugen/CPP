#include "RPN.hpp"

int	main(int argc, char* argv[])
{
	if (argc != 2)
	{
		std::cerr << "Only take one string as input!\n";
		return (1);
	}
	RPN	rpn;

	rpn.calculateRPN(argv[1]);
	return (0);
}
