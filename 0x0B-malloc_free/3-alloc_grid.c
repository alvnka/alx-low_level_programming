#include "main.h"

/**
 * alloc_grid - function that returns a
 * pointer to a 2 dimentionsal array
 * @width: width of array
 * @height: height of array
 * Return: pointer to a 2 dimensional array
 * NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **point_it;
	int i, j;

	if (width < 1 || height < 1)
	{
		return (NULL);
		free(point_it);
	}
	point_it = malloc(height * sizeof(int *));

	if (point_it == NULL)
	{
		return (NULL);
		free(point_it);
	}
	for (i = 0; i < height; i++)
	{
		point_it[i] = malloc(width * sizeof(int));
		if (point_it[i] == NULL)
		{
			for (i--; i >= 0; i--)
			{
				free(point_it);
				return (NULL);
			}
			free(point_it);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			point_it[i][j] = 0;
		}
	}
	return (point_it);
	free(point_it);
}
