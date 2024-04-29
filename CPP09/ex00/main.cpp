#include  "BitcoinExchange.hpp"

int	main(void)
{
	BitcoinExchange	btc;

	try
	{
		btc.input_database("data.csv");
		btc.input_file("input");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}
