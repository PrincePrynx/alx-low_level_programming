#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - starting point
*Description: prints all possible different combinations of two 2 digits
 *Return: set at 0 (success)
 */
int main(void)
{
	int c = 0;
	int fD;
	int sD;
	int lD;

	while (c <= 999)
	{
		fD = (c / 100 + '0');
		sD = (c / 10 % 10 + '0');
		lD = (c % 10 + '0');

		if ((fD < sD) && (sD < lD))
{
			putchar(fD);
			putchar(sD);
			putchar(lD);
}

			if (c != 789)
{
				putchar(',');
				putchar(' ');
}
c++;
		}
putchar('\n');
return (0);
}
