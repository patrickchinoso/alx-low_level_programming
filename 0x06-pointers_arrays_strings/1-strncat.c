#include "main.h"
/**
 * _strncat - function that concatenate 2 strings
 * using most n bytes from the src
 * @dest: value to be inputed
 * @src: value to be inputed
 * @n: inputed value
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (y < n && src[y] != '\0')
	{
	dest[x] = src[y];
	x++;
	y++;
	}
	dest[x] = '\0';
	return (dest);
}
