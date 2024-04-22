#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <string>
# include <vector>
# include <array>
# include <algorithm>

class ValueNotFoundException : public std::exception
{
	virtual const char*	what() const throw()
	{
		return ("Value wasn't found in Container!");
	}
};

template <typename T>
typename T::iterator	easyfind(T& con, int find)
{
	typename T::iterator idx = std::find(con.begin(), con.end(), find);

	if (idx != con.end())
		return (idx);
	else
		throw ValueNotFoundException();
}

#endif /*EASYFIND_HPP*/