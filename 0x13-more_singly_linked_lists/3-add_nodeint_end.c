#include "lists.h"


/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer
 * @n: input
 *
 * Return: the address of the new element, or NULL if it failed
 */


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tn = NULL;
	listint_t *new = NULL;

	tn = malloc(sizeof(listint_t));
	if (tn)
	{
		tn->n = n;
		tn->next = NULL;
		if (*head)
		{
			new = *head;
			while (new->next)
				new = new->next;
			(*new).next = tn;
		}
		else
			*head = tn;
	}

	return (tn);
}
