#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <string>
# include <vector>
# include <deque>
# include <algorithm>
# include <limits>
# include <sys/time.h>
# include <climits>
# include <sstream>

// Expected: Vector to be faster since it has faster element access.
class PmergeMe
{
	private:
		double				timeCon1;
		double				timeCon2;
		std::vector<int>	sequenceVec;
		std::deque<int>		sequenceDeque;

		void	FordJohnsonAlg(std::vector<int>& seq, char *argv[]);
		void	FordJohnsonAlg(std::deque<int>& seq, char *argv[]);
		// void	mergeInsertionSort(std::vector<int>& seq);
		void	fordJohnsonSort(std::vector<int>& seq);
		void	fordJohnsonSort(std::deque<int>& seq);
		// void	mergeInsertionSort(std::deque<int>& seq);
		int		stringToInt(const std::string& str);
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