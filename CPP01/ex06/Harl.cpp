#include "Harl.hpp"

Harl::Harl()
{
	std::cout << "Hello World!" << std::endl;
}

Harl::~Harl()
{
	std::cout << "NOOO WHY DON'T DESTROY ME!! AHHHH..." << std::endl;
}

void	Harl::complain(std::string level)
{
	const char *names[] = {"DEBUG", "INFO", "WARNING", "ERROR", NULL};
	void (Harl::*msg[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	for (int i = 0; level[i]; i++)
		level[i] = std::toupper(level[i]);
	for (int i = 0; i < 4; i++)
	{
		if (names[i] == level)
		{
			int	casenbr = i + 1;
			switch (casenbr)
			{
				case 1:
					for (int j = casenbr; j < 5; j++)
						(this->*msg[j - 1])();
					break ;
				case 2:
					for (int j = casenbr; j < 5; j++)
						(this->*msg[j - 1])();
					break ;
				case 3:
					for (int j = casenbr; j < 5; j++)
						(this->*msg[j - 1])();
					break ;
				case 4:
					for (int j = casenbr; j < 5; j++)
						(this->*msg[j - 1])();
					break ;
			}
			return ;
		}
	}
	std::cout << "I ONLY ACCEPT DEBUG, INFO, WARNING, ERROR!!!!!" << std::endl;
}

void	Harl::debug(void)
{
	std::cout << "This is a debug message, why do I have to debug myself again?" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "This is an info message. Why do I even keep you informed?" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "This is a warning. Listen or your Computer has Virus!" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "ERROR! FATAL! PREPARE FIRE EXTINGUISHER!" << std::endl;
}
