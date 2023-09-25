#include "lists.h"

/**
 * insert_nodeint_at_index -function that inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is to be added
 * @n: data number to insert in the new node
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *z;
	listint_t *y = *head;

	z = malloc(sizeof(listint_t));
	if (!z || !head)
		return (NULL);

	z->n = n;
	z->next = NULL;

	if (idx == 0)
	{
		z->next = *head;
		*head = z;
		return (z);
	}

	for (i = 0; y && i < idx; i++)
	{
		if (i == idx - 1)
		{
			z->next = y->next;
			y->next = z;
			return (z);
		}
		else
			y = y->next;
	}

	return (NULL);
}
