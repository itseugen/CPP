#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>

class Contact
{
	public:
		Contact();
		~Contact();
		void	addContact(void);
		void	getInfoString(std::string msg);
	private:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	int			phone_number;
	std::string	secret;
};

#endif /*CONTACT_HPP*/