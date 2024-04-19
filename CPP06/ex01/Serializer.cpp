#include "Serializer.hpp"

/* -------------------------------------------------------------------------- */
/*                           Orthodox Canonical Form                          */
/* -------------------------------------------------------------------------- */

Serializer::Serializer()
{
	std::cout << "Serialize Default Constructor called" << std::endl;
}

Serializer::~Serializer()
{
	std::cout << "Serialize Default Destructor called" << std::endl;
}

Serializer::Serializer(const Serializer& copy)
{
	if (this != &copy)
		*this = copy;
}

Serializer&	Serializer::operator=(const Serializer &copy)
{
	if (this != &copy)
	{
	}
	return (*this);
}

uintptr_t	Serializer::serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*		Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}
