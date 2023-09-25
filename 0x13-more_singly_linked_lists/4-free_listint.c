#include "lists.h"

/**
 * free_listint - function free  linked list
 * @head: listint_t list to be freed by function
 */
void free_listint(listint_t *head)
{
	listint_t *y;

	while (head)
	{
		y = head->next;
		free(head);
		head = y;
	}
}
