#include "lists.h"

/**
 * sum_listint - function calculates the sum the data in a listint_t list
 * @head: first node in the linked list
 * Return: result sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *y = head;

	while (y)
	{
		sum += y->n;
		y = y->next;
	}

	return (sum);
}
