#pragma once
#include "max.hpp"
#include "min.hpp"
#include <iostream>


template <typename T>
void swap (T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}
