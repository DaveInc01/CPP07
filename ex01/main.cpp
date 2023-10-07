#include "includes/iter.hpp"

int main ()
{
	int arr[5] = {10, 20, 30, 40, 50};
	unsigned long len = sizeof(arr) / sizeof(arr[0]);
	::iter(arr, len, arr_inform);
}
