#include "main.h"
/**
 * puts_half - function prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: to be determined
 * Return: half of input
 */
void puts_half(char *str)
{
	int a, n, m;

	m = 0;

	for (a = 0; str[a] != '\0'; a++)
		m++;

	n = (m / 2);

	if ((m % 2) == 1)
		n = ((m + 1) / 2);

	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
