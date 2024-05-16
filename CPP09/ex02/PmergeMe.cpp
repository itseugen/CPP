#include "PmergeMe.hpp"

/* -------------------------------------------------------------------------- */
/*                                 Exceptions                                 */
/* -------------------------------------------------------------------------- */

class	PmergeMe::WrongInputException : public std::exception
{
	virtual const char*	what() const throw()
	{
		return ("Wrong Input! Program only takes positive integers!");
	}
};

/* -------------------------------------------------------------------------- */
/*                           Orthodox Canonical Form                          */
/* -------------------------------------------------------------------------- */

PmergeMe::PmergeMe()
{
	// std::cout << "PmergeMe Default Constructor called" << std::endl;
	timeCon1 = 0;
	timeCon2 = 0;
}

// PmergeMe::PmergeMe(char *argv[])
// {
// 	for (int i = 0; argv[i] != NULL; i++)
// 	{
// 		int	nbr = std::stoi(argv[i]);

// 		if (nbr <= 0)
// 			throw WrongInputException();
// 		this->sequenceVec.push_back(nbr);
// 		this->sequenceDeque.push_back(nbr);
// 	}
// }

PmergeMe::~PmergeMe()
{
	// std::cout << "PmergeMe Default Destructor called" << std::endl;
}

PmergeMe::PmergeMe(const PmergeMe& copy)
{
	// std::cout << "PmergeMe Copy Constructor called" << std::endl;
	if (this != &copy)
	{
		this->sequenceDeque = copy.sequenceDeque;
		this->sequenceVec = copy.sequenceVec;
		timeCon1 = 0;
		timeCon2 = 0;
	}
}

PmergeMe&	PmergeMe::operator=(const PmergeMe &copy)
{
	// std::cout << "PmergeMe Copy Assignment called" << std::endl;
	if (this != &copy)
	{
		this->sequenceDeque = copy.sequenceDeque;
		this->sequenceVec = copy.sequenceVec;
	}
	return (*this);
}

/* -------------------------------------------------------------------------- */
/*                                  Functions                                 */
/* -------------------------------------------------------------------------- */

void	PmergeMe::sortBoth(char *argv[])
{
	FordJohnsonAlg(this->sequenceVec, argv);
	FordJohnsonAlg(this->sequenceDeque, argv);
	std::cout << "Before:\t";
	for (int i = 1; argv[i] != NULL; i++)
		std::cout << argv[i] << " ";
	std::cout << std::endl;
	std::cout << "Sorted:\t";
	for (size_t i = 0; i < this->sequenceVec.size(); i++)
		std::cout << this->sequenceVec[i] << " ";
	std::cout << std::endl;
	std::cout << "Time to process and sort " << this->sequenceVec.size() << " elements with std::vector: " << this->timeCon1 << " us\n";
	std::cout << "Time to process and sort " << this->sequenceDeque.size() << " elements with std::deque: " << this->timeCon2 << " us\n";
}

void	PmergeMe::FordJohnsonAlg(std::vector<int>& seq, char *argv[])
{
	struct timeval start, end;

	gettimeofday(&start, NULL);
	{
		for (int i = 1; argv[i] != NULL; i++)
		{
			try
			{
				int	nbr = stringToInt(argv[i]);

				if (nbr <= 0 || (std::string(argv[i]).length() >= 10 && std::string(argv[i]) > "2147483647"))
					throw WrongInputException();
				this->sequenceVec.push_back(nbr);
			}
			catch(const std::exception& e)
			{
				throw WrongInputException();
			}
		}
	}
	int		maxNbr = INT_MIN;
	int		minNbr = INT_MAX;

	for (size_t i = 0; i < seq.size(); i++)
	{
		if (seq[i] > maxNbr)
			maxNbr = seq[i];
		if (seq[i] < minNbr)
			minNbr = seq[i];
	}
	std::vector<std::vector<int> >	buckets(maxNbr - minNbr + 1);
	for (size_t i = 0; i < seq.size(); ++i)
		buckets[seq[i] - minNbr].push_back(seq[i]);
	seq.clear();
	for (size_t i = 0; i < buckets.size(); i++)
	{
		if (!buckets[i].empty())
		{
			std::sort(buckets[i].begin(), buckets[i].end());
			for (size_t j = 0; j < buckets[i].size(); j++)
				seq.push_back(buckets[i][j]);
		}
	}
	gettimeofday(&end, NULL); // End time
	long seconds = end.tv_sec - start.tv_sec;
	long microseconds = end.tv_usec - start.tv_usec;
	this->timeCon1 = seconds * 1000000 + microseconds;
}

void	PmergeMe::FordJohnsonAlg(std::deque<int>& seq, char *argv[])
{
	struct timeval start, end;

	gettimeofday(&start, NULL);
	{
		for (int i = 1; argv[i] != NULL; i++)
		{
			try
			{
				int	nbr = stringToInt(argv[i]);

				if (nbr <= 0 || (std::string(argv[i]).length() >= 10 && std::string(argv[i]) > "2147483647"))
					throw WrongInputException();
				this->sequenceDeque.push_back(nbr);
			}
			catch(const std::exception& e)
			{
				throw WrongInputException();
			}
		}
	}
	int		maxNbr = INT_MIN;
	int		minNbr = INT_MAX;

	for (size_t i = 0; i < seq.size(); i++)
	{
		if (seq[i] > maxNbr)
			maxNbr = seq[i];
		if (seq[i] < minNbr)
			minNbr = seq[i];
	}
	std::deque<std::deque<int> >	buckets(maxNbr - minNbr + 1);
	for (size_t i = 0; i < seq.size(); ++i)
		buckets[seq[i] - minNbr].push_back(seq[i]);
	seq.clear();
	for (size_t i = 0; i < buckets.size(); i++)
	{
		if (!buckets[i].empty())
		{
			std::sort(buckets[i].begin(), buckets[i].end());
			for (size_t j = 0; j < buckets[i].size(); j++)
				seq.push_back(buckets[i][j]);
		}
	}
	gettimeofday(&end, NULL); // End time
	long seconds = end.tv_sec - start.tv_sec;
	long microseconds = end.tv_usec - start.tv_usec;
	this->timeCon2 = seconds * 1000000 + microseconds;
}

int	PmergeMe::stringToInt(const std::string& str)
{
	int	result = 0;
	std::istringstream iss(str);

	iss >> result;
	if (iss.fail())
	{
		throw std::invalid_argument("Conversion failed.");
	}
	return (result);
}
