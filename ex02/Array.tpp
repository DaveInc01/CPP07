#include "./includes/Array.hpp"

template <class T> 
Array<T>::Array( void ) : n(0)
{
    arr = new T[0];
}

template <class T> 
Array<T>::Array( unsigned int n ) : n(n)
{
    arr = new T[n];
    for (unsigned int i = 0; i < n; i++)
        arr[i] = 0;
}

template <class T> 
Array<T>::Array( const Array &copy )
{
    arr = new T[n];
    try{
        for (unsigned int i = 0; i < n; i++)
            arr[i] = copy.arr[i];
    }
    catch (std::exception e)
    {
        std::cout << e.what() << std::endl;
    }
}

template <class T> 
Array<T>& Array<T>::operator=( const Array<T> &obj ) 
{
    if (this != obj)
    {
        try{
            arr = new T[n];
            for (unsigned int i = 0; i < n; i++)
                arr[i] = obj.arr[i];
        }
        catch(std::exception e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    return (this);
}

template <class T> 
unsigned int Array<T>::size()
{
    unsigned int i;
    try{
        n = sizeof(arr) / sizeof(arr[0]);
        for (i = 0; i < n; i++)
            ;
    }
    catch(std::exception e){
        std::cout << e.what() << std::endl;
    }
    return (i);

}

template <class T> 
Array<T>::~Array( void ){
    delete []arr;
}
