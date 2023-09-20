#include "main.h"

/**
 * swap_int - swap the values of 2 ints
 * @a: inut a
 * @b: input b
 */
void swap_int(int *a, int *b)
{
	int swaped;

	swaped = *a;
	*a = *b;
	*b = swaped;
}
