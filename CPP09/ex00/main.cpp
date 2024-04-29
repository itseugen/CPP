#include  "BitcoinExchange.hpp"

int	main(int argc, char* argv[])
{
	if (argc != 2)
	{
		std::cerr << "Wrong input! Program takes ONE file as input!\n";
		return (1);
	}
	try
	{
		BitcoinExchange	btc;

		btc.input_database("data.csv");
		btc.input_file(argv[1]);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}
