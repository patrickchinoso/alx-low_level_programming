#include "main.h"

/**
 * _isdigit - checks if digits are 0 - 9
 * @c: char determined
 *
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
