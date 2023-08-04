#include "main.h"


/**
 * binary_to_uint - converts a binary num to an unsigned int
 * @b: is a pointer to str 0,1
 * Return: converted num
 */


unsigned int binary_to_uint(const char *b)
{
	int x, newVal = 0;


	if (b == NULL)
		return (0);
	for (x = 0; b[x] != '\0'; x++)
	{
		if (b[x] != 48 && b[x] != 49)
			return (0);
		newVal = (newVal * 2) + (b[x] - 48);
	}
	return (newVal);
}
