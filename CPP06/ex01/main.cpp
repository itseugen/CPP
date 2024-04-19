#include "Serializer.hpp"

int	main(void)
{
	{
		std::cout << "Test 01, Successfull:\n";
		Data		data("Hello World!");
		uintptr_t	serialized;
		Data*		deserialized;

		serialized = Serializer::serialize(&data);
		deserialized = Serializer::deserialize(serialized);

		std::cout << "Data value: " << data.data_str << std::endl;
		std::cout << "Serialized: " << serialized << std::endl;
		std::cout << "Desirialized: " << deserialized << std::endl;
		if (deserialized == &data)
			std::cout << "Serialization successfull!\n";
		else
			std::cout << "Serialization unsuccessfull!\n";
	}
	{
		std::cout << "\n\nTest 02, Unsuccessfull:\n";
		Data		data("Hello World!");
		uintptr_t	serialized;
		Data*		deserialized;

		serialized = Serializer::serialize(&data);
		deserialized = Serializer::deserialize(serialized + 432);

		std::cout << "Data value: " << data.data_str << std::endl;
		std::cout << "Serialized: " << serialized << std::endl;
		std::cout << "Desirialized: " << deserialized << std::endl;
		if (deserialized == &data)
			std::cout << "Serialization successfull!\n";
		else
			std::cout << "Serialization unsuccessfull!\n";
	}
	return (0);
}
