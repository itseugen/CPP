#ifndef ITER_HPP
# define ITER_HPP

template <typename A, typename L, typename F>
void	iter(A* arr, L length, F f)
{
	for (int i = 0; i < length; i++)
		f(arr[i]);
}

#endif /*ITER_HPP*/