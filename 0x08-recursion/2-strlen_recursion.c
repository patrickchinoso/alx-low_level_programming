#include "main.h"
/**
 * _strlen_recursion - Function that returns the length of a string.
 * @s: The string to be determined
 * Return: Length of a string.
 */
int _strlen_recursion(char *s)
{
	int x = 0;

	if (*s)
	{
		x++;
		x += _strlen_recursion(s + 1);
	}

	return (x);
}
