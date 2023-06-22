#include <stdio.h>
#include "main.h"

/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * but for multiples of three prints Fizz instead of the number
 * and for the multiples of five prints Buzz
 * Return: Always 0 (Success)
 */

int main(void)
{
	int fB;

	for (fB = 1; fB <= 100; fB++)
	{
		if (fB % 3 == 0 && fB % 5 != 0)
		{
			printf(" Fizz");
		} else if (fB % 5 == 0 && fB % 3 != 0)
		{
			printf(" Buzz");
		} else if (fB % 3 == 0 && fB % 5 == 0)
		{
			printf(" FizzBuzz");
		} else if (fB == 1)
		{
			printf("%d", fB);
		} else
		{
			printf(" %d", fB);
		}
	}
	printf("\n");

	return (0);
}
