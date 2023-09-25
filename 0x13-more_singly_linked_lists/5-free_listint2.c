#include "lists.h"

/**
 * free_listint2 - function frees linked list
 * @head: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *y;

	if (head == NULL)
		return;

	while (*head)
	{
		y = (*head)->next;
		free(*head);
		*head = y;
	}

	*head = NULL;
}
