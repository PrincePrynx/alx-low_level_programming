#include "main.h"
#include <unistd.h>

/**
*puts2 - prints every other character of a string
*
*@str: char to check
*
*Return: 0 is success
*/


void puts2(char *str)
{
int d = 0;
while (str[d] != '\0')
{

if (d % 2 == 0)
{
_putchar(str[d]);
}
d++;
}

_putchar('\n');

}
