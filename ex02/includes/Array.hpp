#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <cstdlib>

template <class T>
class Array {
public:
    Array();
    Array( unsigned int n );
    Array( const Array &copy );
    Array& operator=( const Array &copy );
    ~Array();
    unsigned int size();
    unsigned int n;
    T *arr;
private:
};


// template class Array<int>;

#include "../Array.tpp"

#endif