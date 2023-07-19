#include "function_pointers.h"

/**
*int_index - function that searches for an integer
*@array: the array of integer
*@size: array size
*@cmp: the function pointer
*
*Return:  index of the first element for cmp function or -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int X = 0;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (; size > X; X++)
	{
		if (cmp(array[X]))
			return (X);
	}
	return (-1);
}
