#pragma once

#include <iostream>

template <typename T>
void arr_inform(T const &item)
{
	std::cout << "Array item is " << item << std::endl;
}

template <typename T>
void iter(T *arr, unsigned long len, void (*func)(T const &item))
{
	for (unsigned long i = 0; i < len; i++)
	{
		func(arr[i]);
	}
}
