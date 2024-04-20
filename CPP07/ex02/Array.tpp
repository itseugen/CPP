#ifndef ARRAY_TPP
# define ARRAY_TPP

# include <iostream>
# include <string>

template <typename T>
Array<T>::Array()
{
	this->arr = NULL;
	this->arr_size = 0;
}

template <typename T>
Array<T>::~Array()
{
	delete[] this->arr;
}

template <typename T>
Array<T>::Array(const Array<T> copy)
{
	this->arr_size = copy.arr_size;
	this->arr = new[this->arr_size];
	for (int i = 0; i < this->arr_size; i++)
	{
		this->arr[i] = copy.arr[i];
	}
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& copy)
{
	if (this != &copy)
	{
		delete[] this->arr;
		this->arr_size = copy.arr_size;
		this->arr = new[this->arr_size];
		for (int i = 0; i < this->arr_size; i++)
			this->arr[i] = copy.arr[i];
	}
	return (*this);
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	this->arr = new[n]
	this->arr_size = n;
}

#endif /*ARRAY_TPP*/