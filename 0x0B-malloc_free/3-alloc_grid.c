#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - print grid (matrix)
 * @width: width
 * @height: height
 *
 * Return: result or NULL if fail
 */
int **alloc_grid(int width, int height)
{
	int indx, count, i, j;
	int **ptr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		ptr = (int **) malloc(height * sizeof(int *));
		/* each pointer has malloc in place*/
		if (!ptr)
		{
			free(ptr);
			return (NULL);
		}
		for (indx = 0; indx < height; indx++)
		{
			ptr[indx] = (int *) malloc(width * sizeof(int));
			if (!ptr[indx])
			{
				for (count = 0; count <= indx; count++)
					free(ptr[count]);
				free(ptr);
				return (NULL);
			}
		}
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
			{
				ptr[i][j] = 0;
			}
		}
		return (ptr);
	}
}
