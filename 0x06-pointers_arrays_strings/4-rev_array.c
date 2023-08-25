#include "main.h"
/**
 * reverse_array - function that reverse array of integers
 * @a: array to be determined
 * @n: number of elements in array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int x;
	int y;

	for (x = 0; x < n--; y++)
	{
		y = a[x];
		a[x] = a[n];
		a[n] = y;
	}
}
