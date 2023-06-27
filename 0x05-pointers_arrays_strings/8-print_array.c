#include "main.h"

/**
*print_array - a function that prints n elements of an array
*@a: input array
*@n: length of array
*Return: a and n inputs
*/
void print_array(int *a, int n)
{
int LT;
	for (LT = 0; n > LT; LT++)
{
		printf("%d", a[LT]);
	if (LT != (n - 1))
{
		printf(",");
}
}
putchar('\n');
}
