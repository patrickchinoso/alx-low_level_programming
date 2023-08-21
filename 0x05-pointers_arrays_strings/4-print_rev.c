#include "main.h"

/**
 *print_rev - prints a string, in reverse
 *@s: to be declared
 *Return: 0
 */

void print_rev(char *s)
{
	int z;
	int x = 0;

	for (z = 0 ; s[z] != '\0' ; z++)
		x++;
	for (z = x - 1; z >= 0 ; z--)
		_putchar(s[z]);
	_putchar('\n');
}
