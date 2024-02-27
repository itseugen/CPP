#include "Contact.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

void	Contact::addContact(void)
{
	first_name = getInfoString("First Name: ");
	last_name = getInfoString("Last Name: ");
	nickname = getInfoString("Nickname: ");
	phone_number = getPhoneNumber();
	secret = getInfoString("Darkest Secret: ");
}

std::string	Contact::getInfoString(std::string msg)
{
	std::string	input;

	std::cout << msg;
	std::getline(std::cin, input);
	if (input.empty())
	{
		std::cout << "Field cannot be empty" << std::endl;
		return (getInfoString(msg));
	}
	return (input);
}

std::string	Contact::getPhoneNumber(void)
{
	std::string	input;

	std::cout << "Number: ";
	std::getline(std::cin, input);
	if (input.empty())
	{
		std::cout << "Field cannot be empty" << std::endl;
		return (getPhoneNumber());
	}
	for (size_t i = 0; i < input.size(); i++)
	{
		if (!std::isdigit(input[i]))
		{
			std::cout << "Number has to be numeric" << std::endl;
			return (getPhoneNumber());
		}
	}
	return (input);
}

void	Contact::printCLine(void)
{
	printColoumn(first_name);
	std::cout << "|";
	printColoumn(last_name);
	std::cout << "|";
	printColoumn(nickname);
}

void	Contact::printColoumn(std::string info)
{
	std::string	temp = info;

	if (temp.size() > 10)
	{
		temp[9] = '.';
		temp.resize(10);
	}
	std::cout << std::setw(10) << std::left << temp;
}

void	Contact::printInfo(void)
{
	std::cout << std::setw(14) << "First Name" << ": "<< first_name << std::endl;
	std::cout << std::setw(14) << "Last Name" << ": "<< last_name << std::endl;
	std::cout << std::setw(14) << "Nickname" << ": "<< nickname << std::endl;
	std::cout << std::setw(14) << "Phone Number" << ": "<< phone_number << std::endl;
	std::cout << std::setw(14) << "Darkest Secret" << ": "<< secret << std::endl;
}
