#include <string>
#include <iostream>
static void	printValues(std::string str, std::string *ptr, std::string &ref);

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*ptr = &str;
	std::string	&ref = str;

	std::cout << "String mem-address: " << &str << std::endl;
	std::cout << "Pointer mem-address: " << ptr << std::endl;
	std::cout << "Reference mem-address: " << &ref << std::endl;
	printValues(str, ptr, ref);

	std::cout << "----------------------" << std::endl;
	std::cout << "Changing string value!" << std::endl;
	str = "THIS IS A NEW STRING VALUE!";
	printValues(str, ptr, ref);

	std::cout << "----------------------" << std::endl;
	std::cout << "Changing reference value!" << std::endl;
	ref = "THIS IS A NEW REFERENCE VALUE!";
	printValues(str, ptr, ref);

	std::cout << "----------------------" << std::endl;
	std::cout << "Changing pointer value!" << std::endl;
	*ptr = "THIS IS A NEW POINTER VALUE!";
	printValues(str, ptr, ref);
	return (0);
}

static void	printValues(std::string str, std::string *ptr, std::string &ref)
{
	std::cout << "----------------------" << std::endl;
	std::cout << "String value: " << str << std::endl;
	std::cout << "Pointer value: " << *ptr << std::endl;
	std::cout << "Reference value: " << ref << std::endl;
}
