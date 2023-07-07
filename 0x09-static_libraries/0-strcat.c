#include "main.h"

/**
 * _strcat - concatenates two strings
*@dest: destination string pointer
*@src: source string pointer
*
*Return: pointer to destination string
*/

char *_strcat(char *dest, char *src)
{

int length_of_string, C;

length_of_string = 0;
while (dest[length_of_string] != '\0')
{
length_of_string++;
}
for (C = 0; src[C] != '\0'; C++, length_of_string++)
{
dest[length_of_string] = src[C];
}
dest[length_of_string] = '\0';
return (dest);

}
