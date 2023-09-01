#include <stdio.h>
#include "main.h"

/**
 * main - program prints all arguments it receives
 * @argc: arguments number
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int z;

	for (z = 0; z < argc; z++)
	{
		printf("%s\n", argv[z]);
	}

	return (0);
}
