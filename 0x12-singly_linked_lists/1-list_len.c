#include "lists.h"
#include <stdio.h>

/**
 * list_len - Entry point
 * @h: the  pointer
 *
 * Return: output
 */


size_t list_len(const list_t *h)
{
	size_t N = 0;

		while (h != NULL)
	{
		h = h->next;
		N++;
	}
	return (N);
}
