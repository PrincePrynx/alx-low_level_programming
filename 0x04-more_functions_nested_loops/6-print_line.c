#include "main.h"
/**
*print_line - draws a straight line in the terminal
*
*@n: line
*Return: \n when n is 0
*/
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int sL;

		for (sL = 1; sL <= n; sL++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

}
