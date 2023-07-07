#include "main.h"

/**
*_strncat - concatenate two strings
*using at most n bytes from src
*@dest: destination string pointer
*@src: source string pointer
*@n: number of bytes to be concatenated
*
*Return:pointer to destination string
*/

char *_strncat(char *dest, char *src, int n)
{
	int length_of_string;
	int C;

	length_of_string = 0;
	while (dest[length_of_string] != '\0')
	{
		length_of_string++;
	}
	for (C = 0; n > C && src[C] != '\0'; C++)
	{
	dest[length_of_string] = src[C];
	length_of_string++;
	}
	dest[length_of_string] = '\0';
	return (dest);
}



