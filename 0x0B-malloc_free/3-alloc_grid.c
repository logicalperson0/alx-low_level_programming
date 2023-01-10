#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a
 * 2 dimensional array of integers.
 * @width: Parameter for the width of 2d arr
 * @height: Parameter for the ht of 2d arr
 * Return: ptr to 2d arr
 */
int **alloc_grid(int width, int height)
{
	int j, i;
	int **ptr;

	if (width < 1 || height < 1)
		return (NULL);

	ptr = (int **)malloc(height * sizeof(int *));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *)malloc(width * sizeof(int));
		if (ptr[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(ptr[i]);
			free(ptr);
			return (NULL);
		}
	}
	for (j = 0; j < height; j++)
	{
		for (i = 0; i < width; i++)
			ptr[j][i] = 0;
	}
	return (ptr);
}
