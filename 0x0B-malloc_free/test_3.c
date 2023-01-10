#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid -
 * @width, @height
 * Return: ptr to 2d arr
 */
int **alloc_grid(int width, int height)
{
	int i, j;
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
		i = 0;
		for (i = 0; i < width; i++)
			ptr[j][i] = 0;
	}
	return (ptr);
}
