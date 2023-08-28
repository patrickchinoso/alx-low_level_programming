#include "main.h"
/**
 * _memset - function fills a memory with a constant byte number
 * @s: starting area pointed to be determined
 * @b: the desired constatnt byte
 * @n: number of bytes to be determined
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
