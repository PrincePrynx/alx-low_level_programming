#include "main.h"
/**
*_strlen - return the length of a string
*
*@s: char to check string
*
*Return: 0 is success
*/


int _strlen(char *s)
{

int LN = 0;

	while (s[LN])
		LN++;

return (LN);

}
