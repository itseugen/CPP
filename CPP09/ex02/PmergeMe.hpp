#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <string>
# include <vector>
# include <deque>
# include <algorithm>
# include <limits>
# include <sys/time.h>

class PmergeMe
{
	private:
		double				timeCon1;
		double				timeCon2;
		std::vector<int>	sequenceVec;
		std::deque<int>		sequenceDeque;

		void	FordJohnsonAlg(std::vector<int>& seq, char *argv[]);
		void	FordJohnsonAlg(std::deque<int>& seq, char *argv[]);
	public:
		PmergeMe();
		// PmergeMe(char *argv[]);
		~PmergeMe();
		PmergeMe(const PmergeMe& copy);
		PmergeMe& operator=(const PmergeMe& copy);

		class	WrongInputException;

		void	sortBoth(char *argv[]);
};

#endif /*PMERGEME_HPP*/