#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <algorithm>
# include <vector>
# include <ctime>
# include <climits>

class Span
{
	private:
		std::vector<int>	arr;
		unsigned int		N;
		Span();
	public:
		Span(unsigned int N);
		~Span();
		Span(const Span& copy);
		Span& operator=(const Span& copy);

		void	addNumber(int n);
		int		shortestSpan(void);
		int		longestSpan(void);
		void	addXNumbers(unsigned int X);
		void	printArray(void);

		class	ArrayFullException;
		class	ArrayEmptyException;
		class	NTooSmallException;
};

#endif /*SPAN_HPP*/