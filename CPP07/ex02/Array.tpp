#ifndef ARRAY_TPP
# define ARRAY_TPP

template <typename T>
Array<T>::Array()
{
	this->arr = NULL;
	this->arr_size = 0;
}

template <typename T>
Array<T>::~Array()
{
	if (this->arr)
		delete[] this->arr;
}

template <typename T>
Array<T>::Array(const Array<T>& copy)
{
	this->arr_size = copy.arr_size;
	this->arr = new T[this->arr_size];
	for (size_t i = 0; i < this->arr_size; i++)
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
		this->arr = new T[this->arr_size];
		for (size_t i = 0; i < this->arr_size; i++)
			this->arr[i] = copy.arr[i];
	}
	return (*this);
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	this->arr = new T[n];
	this->arr_size = n;
}

template <typename T>
size_t	Array<T>::size(void) const
{
	return (this->arr_size);
}

template <typename T>
T&	Array<T>::operator[](size_t index)
{
	if (index > size() - 1)
		throw OutOfBoundException();
	else if (index < 0)
		throw OutOfBoundException();
	else
		return (this->arr[index]);
}

#endif /*ARRAY_TPP*/