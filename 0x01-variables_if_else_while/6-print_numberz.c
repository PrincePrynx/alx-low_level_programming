#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - starting point
 * Description: prints single numbers
 * Return: set at 0 (success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
