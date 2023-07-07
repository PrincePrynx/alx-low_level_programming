#include "main.h"
#include <unistd.h>

/**
*_puts - prints a string
*@str: the string
*
*Return: the length of the string
*/

void _puts(char *str)
{

int L = 0;

while (str[L] != '\0')
{

_putchar(str[L]);
L++;
}

_putchar('\n');

}
