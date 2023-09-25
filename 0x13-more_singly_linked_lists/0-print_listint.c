#include "lists.h"

/**
 * print_listint - function prints the elements of a linked list
 * @h: linked list of type listint_t to print to be determined
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t z = 0;

	while (h)
	{
		printf("%d\n", h->n);
		z++;
		h = h->next;
	}

	return (z);
}
