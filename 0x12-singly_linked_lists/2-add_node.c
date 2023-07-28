#include "lists.h"
#include <string.h>

/**
 * _strlen - prints string length
 * @s: the string to print
 * Return: strlen
 */

int _strlen(const char *s)
{
	int text = 0;


	while (*s)
	{
		s++;
		text++;
	}
	return (text);
}



/**
 * add_node - Entry point
 * @head:is a pointer
 * @str:to be duplicated
 *
 * Return: the address of the new element, or NULL if it failed
 */




list_t *add_node(list_t **head, const char *str)
{
	list_t *tN;

	if (head != NULL && str != NULL)
	{
		tN = malloc(sizeof(tN));
		if (tN == NULL)
			return (NULL);

		tN->len = _strlen(str);
		tN->str = strdup(str);
		tN->next = *(head);
		*head = tN;

		return (tN);
	}
	return (0);
}
