#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <string>
# include <iostream>

class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
	private:
	Contact	c_list[8];
};

#endif /*PHONEBOOK_HPP*/