#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <string>
# include <stack>
# include <sstream>

class RPN
{
	private:
		std::stack<int>	stack;
	public:
		RPN();
		~RPN();
		RPN(const RPN& copy);
		RPN& operator=(const RPN& copy);

		void	calculateRPN(std::string input);
};

#endif /*RPN_HPP*/