#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

/**
*malloc_checked -  function that allocates memory.
*@b: input value
*Return: final results
*/

void *malloc_checked(unsigned int b)

{

	void *ptr;



	ptr = malloc(b);



	if (ptr == NULL)

		exit(98);



	return (ptr);

}
