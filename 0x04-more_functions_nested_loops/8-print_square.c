#include "main.h"

/**
 * print_square - prints a square, followed by a new line;
 * @size: size of the square
 *
*Return: void
*/
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int h, b;

		for (h = 0; h < size; h++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

