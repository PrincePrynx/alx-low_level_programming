#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - starting point
 * Description: prints all possible combination
 * Return: set at 0 (success)
 */

int main(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	putchar(c);
		
if (c != 57)
putchar(',');
putchar(' ');
		

	putchar('\n');
	return (0);
}
