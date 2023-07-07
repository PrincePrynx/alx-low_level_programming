#include "main.h"

/**
*_strncpy - copies a string
*@dest: destination string pointer
*@src: source string pointer
*@n: number of bytes to be used
*
*Return:pointer to destination string
*/

char *_strncpy(char *dest, char *src, int n)
{
int counter;

counter = 0;
while (counter < n && src[counter] != '\0')
{
dest[counter] = src[counter];
counter++;
}
while (counter < n)
{
dest[counter] = '\0';
counter++;
}

return (dest);
}
