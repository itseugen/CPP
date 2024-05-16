#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <string>
# include <stack>
# include <sstream>
# include <algorithm>

class RPN
{
	private:
		std::stack<int>	stack;

		int	stringToInt(const std::string& str);
	public:
		RPN();
		~RPN();
		RPN(const RPN& copy);
		RPN& operator=(const RPN& copy);

		void	calculateRPN(std::string input);
};

#endif /*RPN_HPP*/