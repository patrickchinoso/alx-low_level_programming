#include "lists.h"

/**
 * listint_len - function returns the number of elements in a linked lists
 * @h: linked list of type listint_t to be transmitted
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t z = 0;

	while (h)
	{
		z++;
		h = h->next;
	}

	return (z);
}
