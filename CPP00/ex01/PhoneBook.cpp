#include "PhoneBook.hpp"


PhoneBook::PhoneBook(void)
{
	num_contacts = 0;
}

PhoneBook::~PhoneBook(void)
{
}

void	PhoneBook::newContact(void)
{
	if (num_contacts == 8)
		num_contacts = 0;
	c_list[num_contacts].addContact();
	num_contacts++;
}

void	PhoneBook::search(void)
{
	int	i = 0;
	std::cout << "  index   |first name| last name| nickname " << std::endl;
	while (i < 8)
	{
		std::cout << std::setw(10) << std::left << i;
		std::cout << "|";
		c_list[i].printCLine();
		std::cout << std::endl;
		i++;
	}
	std::cout << "Enter an index: ";
	while (!(std::cin >> i) || i < 0 || i > 7)
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Invalid input. Please enter a number between 0 and 7: ";
	}
	c_list[i].printInfo();
}
