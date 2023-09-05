#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array
 * @width: width to be determined
 * @height: height to be determined
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **bae;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	bae = malloc(sizeof(int *) * height);

	if (bae == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		bae[x] = malloc(sizeof(int) * width);

		if (bae[x] == NULL)
		{
			for (; x >= 0; x--)
				free(bae[x]);

			free(bae);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			bae[x][y] = 0;
	}

	return (bae);
}
