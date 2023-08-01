#include "lists.h"


/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: is a pointer
 * @n: is another pointer
 *
 * Return: address of the new element, or NULL if it failed
 */


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tn;

	tn = malloc(sizeof(listint_t));
	if (tn == NULL || head == NULL)
		return (NULL);
	{
		tn->n = n;
		tn->next = *head;
		*head = tn;
	}

	return (*head);
}
