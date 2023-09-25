#include "lists.h"

/**
 * add_nodeint_end - function that adds a node at the end of a linked list
 * @head: pointer pointing to the first element in the list
 * @n: data nymber to insert in the new element
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *z;
	listint_t *y = *head;

	z = malloc(sizeof(listint_t));
	if (!z)
		return (NULL);

	z->n = n;
	z->next = NULL;

	if (*head == NULL)
	{
		*head = z;
		return (z);
	}

	while (y->next)
		y = y->next;

	y->next = z;

	return (z);
}

