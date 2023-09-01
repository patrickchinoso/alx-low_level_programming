#include "main.h"

/**
 * _strlen - obtain the length of a string
 *@s: String to count
 *Return: length of a string
 */

int _strlen(char *s)
{
	int z;
	int x = 0;

	for (z = 0 ; s[z] != '\0' ; z++)
		x++;
	return (x);
}
