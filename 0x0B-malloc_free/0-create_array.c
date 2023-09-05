#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and initializes
 * @size: array size
 * @c: character to assign
 * Description: creates array size size and assign char c
 * Return: pointer to array, NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(sizeof(char) * size);
	if (size == 0 || arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
