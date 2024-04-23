#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <stack>
# include <iterator>

template <class T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack() : std::stack<T>() {}
		~MutantStack() {}
		MutantStack(const MutantStack<T>& copy) : std::stack<T>(copy){}
		MutantStack& operator=(const MutantStack<T>& copy)
		{
			if (this != &copy)
				std::stack<T>::operator=(copy);
			return (*this);
		}

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator	begin()
		{
			return (this->c.begin());
		}
		iterator	end()
		{
			return (this->c.end());
		}
};

#endif /*MUTANTSTACK_HPP*/