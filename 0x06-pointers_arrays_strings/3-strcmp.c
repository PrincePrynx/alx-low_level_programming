#include "main.h"

/**
*_strncmp - compares two strings
*@dest: destination string pointer
*@src: source string pointer
*@s: strings to be compared
*
*Return:pointer to destination string
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

