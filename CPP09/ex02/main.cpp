#include "PmergeMe.hpp"

int	main(int argc, char *argv[])
{
	PmergeMe	algo;

	if (argc == 1)
	{
		std::cerr << "Program needs at least one argument!\n";
		return (1);
	}
	try
	{
		algo.sortBoth(argv);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return (1);
	}
	return (0);
}
