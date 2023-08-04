#include "main.h"


/**
 * get_endianness - checks the endiannes of input
 * Return: 0 if big endian, 1 if little endian
 */


int get_endianness(void)
{
	char *collect;
	unsigned int m = 1;

	collect = (char *) &m;
	return ((int)*collect);
}
