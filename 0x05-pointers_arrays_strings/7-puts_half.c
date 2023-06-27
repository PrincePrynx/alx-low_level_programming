#include "main.h"
/**
*puts_half - prints half of a string
*@str: char to check
*
*Return: prints
*/
void puts_half(char *str)
{
	int LN = 0, n;

	while (str[LN] != '\0')
		LN++;
	if (LN + 1 % 2 != '0')
		n = (LN - 1) / 2;
	else
		n = (LN / 2);
	n++;

	for (LN = n; str[LN] != '\0'; LN++)
	_putchar(str[LN]);
	_putchar('\n');
}
