#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*Main -  the starting point
*Description: a function that prints 'Programming is
*Return: set to 0 (success)
*/
int main(void)
{
	int n;

	int b;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	b = n % 10;

	if (b > 5)
		printf("Last digit of %d is  %d and is greater than 5\n", n, b);
	else if (b == 0)
		printf("Last digit of %d is  %d and is  0\n", n, b);
	else
		printf("Last digit of %d is  %d and is lesser than 6 and not 0\n", n, b);
	return (0);
}
