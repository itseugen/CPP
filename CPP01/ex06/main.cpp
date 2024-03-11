#include "Harl.hpp"

int	main(int argc, char *argv[])
{
	Harl	complainer;

	if (argc != 2)
	{
		std::cerr << "Input DEBUG/INFO/WARNING/ERROR" << std::endl;
		return (1);
	}
	complainer.complain(argv[1]);
	return (0);
}
