#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <string>
# include <iostream>
# include <iomanip>

class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		void		newContact(void);
		void		search(void);
	private:
		Contact		c_list[8];
		int			num_contacts;
};

#endif /*PHONEBOOK_HPP*/