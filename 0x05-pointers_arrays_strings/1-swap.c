#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: Integer 1 to be declared
 * @b: Integer 2 to bt declared
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int z;

	z = *a;
	*a = *b;
	*b = z;
}
