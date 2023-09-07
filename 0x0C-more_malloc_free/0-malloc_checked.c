#include <stdlib.h>
#include "main.h"

/**
 *malloc_checked - funcion that allocates memory using malloc
 *@b:number of byte to be allocated
 *Return:a pointer to the allocated mem
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
