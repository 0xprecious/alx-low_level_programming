#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocate a block of memory
 * @ptr: pointer to the prev data in mem
 * @old_size: size of prev data
 * @new_size: size kf bew aloced mem
 * Return: address of new mem
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new;
	char *prev;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	new = malloc(new_size);
	if (!ptr1)
		return (NULL);

	prev = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			new[i] = prev[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			new[i] = prev[i];
	}

	free(ptr);
	return (new);
}
