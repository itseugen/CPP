#include "PhoneBook.hpp"

int	main(void)
{
	std::string	input;
	PhoneBook	pbook;

	std::cout << "ADD to add a contact | SEARCH to look up a contact | EXIT to stop the program: ";
	while (1)
	{
		std::getline(std::cin, input);
		if (input == "ADD")
		{
			
		}
		else if (input == "SEARCH")
			std::cout << "Called SEARCH";
		else if (input == "EXIT")
			exit(0);
		else
			std::cout << "ADD to add a contact | SEARCH to look up a contact | EXIT to stop the program: ";
	}
	return (0);
}
