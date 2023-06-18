#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - starting point
*Description: prints all possible different combinations of 2 digits
*Return: set at 0 (success)
*/
int main(void)
{
	int c = 0;
	int FD;
	int LD;

	while (c <= 99)
	{
		FD = (c / 10 + '0');
		LD = (c % 10 + '0');

		if (FD < LD)
		{
			putchar(FD);
			putchar(LD);
}
				if (c != 89)
{
				putchar(',');
				putchar(' ');
}
c++;
}
putchar('\n');
return (0);
}
