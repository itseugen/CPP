#include <iostream>

int main(int argc, char *argv[])
{
	int			str_num = 1;
	std::string	str;

	if (argc <= 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (str_num < argc)
	{
		int	i = 0;
		str = argv[str_num];
		while (str[i] != '\0')
		{
			str[i] = std::toupper(str[i]);
			i++;
		}
		std::cout << str;
		str_num++;
	}
	std::cout << std::endl;
	return (0);
}
