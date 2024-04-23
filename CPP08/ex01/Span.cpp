#include "Span.hpp"

/* -------------------------------------------------------------------------- */
/*                                 Exceptions                                 */
/* -------------------------------------------------------------------------- */

class	Span::ArrayFullException : public std::exception
{
	virtual const char*	what() const throw()
	{
		return ("Array is already full, can't add new Elements!");
	}
};

class	Span::ArrayEmptyException : public std::exception
{
	virtual const char*	what() const throw()
	{
		return ("Array has less than two Elements, can't find a span!");
	}
};

class	Span::NTooSmallException : public std::exception
{
	virtual const char*	what() const throw()
	{
		return ("Can't create an Array with zero Elements!");
	}
};

/* -------------------------------------------------------------------------- */
/*                           Orthodox Canonical Form                          */
/* -------------------------------------------------------------------------- */

Span::Span()
{
	// std::cout << "Span Default Constructor called" << std::endl;
	this->N = 0;
}

Span::~Span()
{
	// std::cout << "Span Default Destructor called" << std::endl;
}

Span::Span(const Span& copy)
{
	// std::cout << "Span Copy Constructor called" << std::endl;
	if (this != &copy)
	{
		this->arr = copy.arr;
		this->N = copy.N;
	}
}

Span&	Span::operator=(const Span &copy)
{
	// std::cout << "Span Copy Assignment called" << std::endl;
	if (this != &copy)
	{
		this->arr = copy.arr;
		this->N = copy.N;
	}
	return (*this);
}

Span::Span(unsigned int N)
{
	// std::cout << "Span Param Constructor called" << std::endl;
	if (N == 0)
		throw NTooSmallException();
	this->N = N;
	srand(static_cast<unsigned int>(time(NULL)));
}

/* -------------------------------------------------------------------------- */
/*                                  Functions                                 */
/* -------------------------------------------------------------------------- */

void	Span::addNumber(int n)
{
	if (this->arr.size() == this->N)
		throw ArrayFullException();
	else
		this->arr.push_back(n);
}

int		Span::shortestSpan(void)
{
	if (this->arr.size() < 2)
		throw ArrayEmptyException();
	std::vector<int>	srt_arr = this->arr;

	std::sort(srt_arr.begin(), srt_arr.end());
	int	shortest_span = INT_MAX;

	for (unsigned int i = 1; i < srt_arr.size(); i++)
	{
		if ((srt_arr[i] - srt_arr[i - 1]) < shortest_span)
			shortest_span = srt_arr[i] - srt_arr[i - 1];
	}
	return (shortest_span);
}

int		Span::longestSpan(void)
{
	if (this->arr.size() < 2)
		throw ArrayEmptyException();
	std::vector<int>	srt_arr = this->arr;

	std::sort(srt_arr.begin(), srt_arr.end());
	return (srt_arr[srt_arr.size() - 1] - srt_arr[0]);
}

void	Span::addXNumbers(unsigned int X)
{
	if (this->arr.size() == this->N)
		throw ArrayFullException();
	for (unsigned int i = 0; i < X && this->arr.size() < this->N; i++)
		this->arr.push_back(std::rand() % 90001 - 10000);
}

void	Span::printArray(void)
{
	std::cout << "Array size: " << this->arr.size() << "/" << this->N << ".\n";
	for (unsigned int i = 0; i < this->arr.size() - 1; i++)
		std::cout << this->arr[i] << ", ";
	std::cout << this->arr[this->arr.size() - 1] << std::endl;
}
