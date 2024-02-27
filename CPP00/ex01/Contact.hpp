#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>
# include <iomanip>

class Contact
{
	public:
		Contact();
		~Contact();
		void		addContact(void);
		void		printCLine(void);
		void		printInfo(void);
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	secret;
		std::string	getInfoString(std::string msg);
		std::string	getPhoneNumber(void);
		void		printColoumn(std::string info);
};

#endif /*CONTACT_HPP*/