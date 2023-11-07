#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: do you seriously need me to explain bruh
 * @height: dude
 * Return: NULL or grid
*/

int **alloc_grid(int width, int height)
{
	int **grid, i;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int) * height);

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			while (i >= 0)
			{
				free(grid[i]);
				i--;
			}
			free(grid);
			return (NULL);
		}
	}
	return (grid);
}
