#include "main.h"
/**
 * _strcmp - function that compare string values
 * @s1: value inputed
 * @s2: value inputed
 *
 * Return: s1[i] - s2[i]
 */
int _strcmp(char *s1, char *s2)
{
	int z;

	z = 0;
	while (s1[z] != '\0' && s2[z] != '\0')
	{
		if (s1[z] != s2[z])
		{
			return (s1[z] - s2[z]);
		}
		z++;
	}
	return (0);
}

