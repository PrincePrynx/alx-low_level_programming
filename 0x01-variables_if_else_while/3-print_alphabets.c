#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - starting point
 * Description: goes back and forth between upper and lowercase
 * Return: Set at 0 (success)
 */
	int main(void)
{
	char lw;

	for (lw = 'a' ; lw <= 'z' ; lw++)
	putchar(lw);

	for (lw = 'A' ; lw <= 'Z' ; lw++)
	putchar(lw);
	putchar('\n');

	return (0);
}
