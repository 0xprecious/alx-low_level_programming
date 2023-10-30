#include "main.h"
#include <stdlib.h>
/**
  *create_array - create a preinitialized character array
  *@size: size
  *@c: chararacter
  *
  *Return: NULL if it fails or
  *Pointer to array.
  */
char *create_array(unsigned int size, char c)
{
	char *init;
	unsigned int count;

	if (size == 0)
	{
		return (NULL);
	}

	init = malloc(sizeof(char) * size);

	/*always check malloc succes before proceed*/

	if (init == NULL)
		return (NULL);

	for (count = 0; count < size; count++)
	{
		init[count] = c;
	}

	return (init);

}
