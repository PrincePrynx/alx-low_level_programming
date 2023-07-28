#include "lists.h"
#include <stdio.h>

/**
 * print_list - Function that prints all the elements of a list_t list
 * @h: is a pointer
 *
 * Return: list
 */

size_t print_list(const list_t *h)
{
	size_t item = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		item++;
		h = h->next;
	}

	return (item);
}
