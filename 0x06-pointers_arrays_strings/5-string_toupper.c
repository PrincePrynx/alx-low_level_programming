#include "main.h"

/**
*string_toupper - changes all lowercase to uppercase
*@n: pointer
*
*Return: pointer
*/

char *string_toupper(char *n)
{
int alp;

alp = 0;
while (n[alp] != '\0')
{
if (n[alp] >= 'a' && n[alp] <= 'z')
n[alp] = n[alp] - 32;
alp++;
}
return (n);
}
