#include "lists.h"

/**
 * get_nodeint_at_index - function returns node of certain index in linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 * Return: pointer to the node searched for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *y = head;

	while (y && i < index)
	{
		y = y->next;
		i++;
	}

	return (y ? y : NULL);
}
