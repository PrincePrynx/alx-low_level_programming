#include "lists.h"


/**
 * free_listint_safe - Entry point
 * @h: is a pointer
 *
 * Return: size of the freed list
 */


size_t free_listint_safe(listint_t **h)
{
	listint_t *node = NULL;
	size_t a = 0;

	if (h == NULL || *h == NULL)
		return (0);
	node = *h;

	do {
		a++;
		node = (*h)->next;
		free(*h);
		if (node >= *h)
		{
			*h = NULL;
			return (a);
		}
		*h = node;
	} while (node != NULL);

	return (a);
}
