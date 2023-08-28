#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: to be determined
 * @size: to be determined
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int xsum1, ysum2, z;

	xsum1 = 0;
	ysum2 = 0;

	for (z = 0; z < size; z++)
	{
		xsum1 = xsum1 + a[z * size + z];
	}

	for (z = size - 1; z >= 0; z--)
	{
		ysum2 += a[z * size + (size - z - 1)];
	}

	printf("%d, %d\n", xsum1, ysum2);
}
