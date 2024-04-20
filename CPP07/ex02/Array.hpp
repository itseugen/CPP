#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>


template <class T>
class Array
{
	private:
		T*		arr;
		size_t	arr_size;
	public:
		Array();
		~Array();
		Array(const Array<T>& copy);
		Array& operator=(const Array<T>& copy);
		Array(unsigned int n);

		size_t	size(void) const;
		T&		operator[](size_t index);

		class OutOfBoundException : std::exception
		{
			virtual const char*	what() const throw()
			{
				return ("trying to access Array out of bound!");
			}
		};
};

# include "Array.tpp"

#endif /*ARRAY_HPP*/