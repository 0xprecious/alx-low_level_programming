#include <stdlib.h>
#include "main.h"
/**
  * _calloc - array mem.
  * @nmemb: number of elements
  * @size: size of array
  *
  * Return: result kr NULL if fail
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *point;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	point = malloc(nmemb * size);
	if (point == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		*((char *)(point) + i) = 0;
	}

	return (point);
}
