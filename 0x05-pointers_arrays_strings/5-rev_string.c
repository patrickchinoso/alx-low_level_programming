#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: To be declared
 * Return: 0
 */

void rev_string(char *s)
{
	{
	char rev = s[0];
	int count = 0;
	int z;

	while (s[count] != '\0')
	count++;
	for (z = 0; z < count; z++)
	{
		count--;
		rev = s[z];
		s[z] = s[count];
		s[count] = rev;
	}
}
}
