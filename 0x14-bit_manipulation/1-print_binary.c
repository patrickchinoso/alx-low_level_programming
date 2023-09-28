#include "main.h"

/**
 * print_binary - function prints the binary rep of a number
 * @n: number to be printed in a binary tbd
 */
void print_binary(unsigned long int n)
{
	int z, count = 0;
	unsigned long int current;

	for (z = 63; z >= 0; z--)
	{
		current = n >> z;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
