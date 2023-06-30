#include "main.h"

/**
*_strcmp - compares two strings
*@s1: first string
*@s2: second string
*
*Return: 0 if s1 and s2 are equals,
*another number if not
*/


int _strcmp(char *s1, char *s2)
{
int Comp_;

Comp_ = 0;
while (s1[Comp_] != '\0' && s2[Comp_] != '\0')
{
if (s1[Comp_] != s2[Comp_])
{
return (s1[Comp_] - s2[Comp_]);
}
Comp_++;
}
return (0);
}

