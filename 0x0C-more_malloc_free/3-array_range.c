#include <stdlib.h>
#include "main.h"
/**
  *array_range - int array
  *@min: min
  *@max: max
  *Return: adress kf array or NULL if fail
  */
int *array_range(int min, int max)
{
	int r, i;
	int *point;

	r = 0;

	if (min > max)
		return (NULL);

	r = ((max + 1) - min);

	point = malloc(r * sizeof(int));

	if (point == NULL)
		return (NULL);

	for (i = 0; i < r; i++)
	{
		*(point + i) = min + i;
	}

	return (point);
}
