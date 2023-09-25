#include "lists.h"

/**
 * add_nodeint - function add a new node at the beginning of a linked list
 * @head: pointer pointing to the first node in the list
 * @n: data number to insert in that new node
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *z;

	z = malloc(sizeof(listint_t));
	if (!z)
		return (NULL);

	z->n = n;
	z->next = *head;
	*head = z;

	return (z);
}
