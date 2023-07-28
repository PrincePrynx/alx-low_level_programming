#include "lists.h"



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
 * add_node_end - function that adds a new node
 * @head: double pointer
 * @str: is a string pointer
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add;
	list_t *tN;

	if (str != NULL)
	{
		add = malloc(sizeof(list_t));
		if (add == NULL)
			return (NULL);
		add->str = strdup(str);
		add->len = _strlen(str);
		add->next = NULL;

		if (*head == NULL)
		{
			*head = add;
			return (*head);
		}
		else
		{
			tN = *head;

			while (tN->next)
				tN = tN->next;
			tN->next = add;
			return (tN);
		}
	}
	return (NULL);
}

