#include "main.h"

/**
 * get_endianness - function checks the endianness
 * Return: 0 for big, 1 for small
 */
int get_endianness(void)
{
	unsigned int z = 1;
	char *y = (char *) &z;

	return (*y);
}
