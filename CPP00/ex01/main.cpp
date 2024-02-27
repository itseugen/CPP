#include "PhoneBook.hpp"

int	main(void)
{
	std::string	input;
	PhoneBook	pbook;

	while (1)
	{
		std::cout << "ADD to add a contact | SEARCH to look up a contact | EXIT to stop the program: ";
		std::getline(std::cin, input);
		for (size_t i = 0; i < input.size(); i++)
			input[i] = std::toupper(input[i]);
		if (input == "ADD")
		{
			pbook.newContact();
		}
		else if (input == "SEARCH")
		{
			pbook.search();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		else if (input == "EXIT")
			return (0);
	}
	return (0);
}
