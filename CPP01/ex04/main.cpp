#include <string>
#include <iostream>
#include <fstream>

static void	replaceFile(std::ifstream &inputFile, std::ofstream &outputFile, std::string s1, std::string s2);

int	main(int argc, char *argv[])
{
	std::string	output_name = argv[1];
	if (argc != 4)
	{
		std::cerr << "Wrong amount of arguments!" << std::endl;
		return (1);
	}
	std::ifstream inputFile(argv[1]);
	if (!inputFile.is_open())
	{
		std::cerr << "Can't open input file!" << std::endl;
		return (1);
	}
	output_name.append(".replace");
	std::ofstream outputFile(output_name);
	if (!outputFile.is_open())
	{
		std::cerr << "Can't create/open output file!" << std::endl;
		inputFile.close();
		return (1);
	}
	replaceFile(inputFile, outputFile, argv[2], argv[3]);
	inputFile.close();
	outputFile.close();
	return (0);
}

static void	replaceFile(std::ifstream &inputFile, std::ofstream &outputFile, std::string s1, std::string s2)
{
	std::string	line;
	bool		firstLine = true;

	while (std::getline(inputFile, line))
	{
		size_t	pos = 0;

		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			line.replace(pos, s1.length(), s2);
		}
		if (firstLine == false)
			outputFile << std::endl;
		else
			firstLine = false;
		outputFile << line;
	}
}