#include "includes/Array.hpp"

int main()
{
    Array<int> obj(10);
    srand(time(NULL));
    for (unsigned int i = 0; i < obj.n; i++)
    {
        obj.arr[i] = rand();
        std::cout << obj.arr[i] << std::endl;
    }

    return 0;
}