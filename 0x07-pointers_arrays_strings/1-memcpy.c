#include "main.h"
/**
 *_memcpy - the function copies memory area
 *@src: source memory to be copied from
 *@dest: destination memory to copy to
 *@n: number of bytes to be determined
 *Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int y = n;

	for (; x < y; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
