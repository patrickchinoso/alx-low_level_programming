#include "main.h"
/**
 * _strchr - function that locates character in a string
 * @s: string to be determined
 * @c: first occurance character to be determined
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int x = 0;

	for (; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (&s[x]);
	}
	return (0);
}
