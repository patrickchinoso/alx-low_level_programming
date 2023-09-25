#include "lists.h"

/**
 * reverse_listint - function reverses a linked list
 * @head: pointer to the first node in the list
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *x = NULL;
	listint_t *z = NULL;

	while (*head)
	{
		z = (*head)->z;
		(*head)->z = x;
		x = *head;
		*head = z;
	}

	*head = x;

	return (*head);
}
