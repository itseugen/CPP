#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <stdint.h>
# include <string>
// # include <cstdlib>

struct Data
{
	std::string	data_str;

	Data(std::string str) : data_str(str) {}
};

class Serializer
{
	private:
		Serializer();
	public:
		~Serializer();
		Serializer(const Serializer& copy);
		Serializer& operator=(const Serializer& copy);

		static uintptr_t	serialize(Data* ptr);
		static Data*		deserialize(uintptr_t raw);
};

#endif /*SERIALIZER_HPP*/