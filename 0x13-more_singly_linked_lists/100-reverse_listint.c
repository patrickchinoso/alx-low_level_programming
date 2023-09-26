#include "lists.h"

/**
 * reverse_listint - function reverses a linked list tbd
 * @head: pointer to the first node in the list
 * Return: pointer to the first node in the new list tbd
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
