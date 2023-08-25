#include "main.h"
/**
 * _strncpy - function copy a string
 * @dest: value to be inputed
 * @src: value to be inputed
 * @n: value to be inputed
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int z;

	z = 0;
	while (z < n && src[z] != '\0')
	{
		dest[z] = src[z];
		z++;
	}
	while (z < n)
	{
		dest[z] = '\0';
		z++;
	}

	return (dest);
}
