#include "main.h"

/**
 *print_alphabet - function that create all letters with putchar
 * Return:0
 */
void print_alphabet(void)

{
	char j;

	for (j = 'a' ; j <= 'z' ; j++)
		_putchar(j);
	_putchar('\n');
}
