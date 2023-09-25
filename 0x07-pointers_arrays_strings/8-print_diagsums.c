#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - sum up the 2 diagonals of a 2D matrix
 * @a: array of int (2D)
 * @size: array size
 */

void print_diagsums(int *a, int size)
{
	int indx, set; sum;

	indx = 0;
	sum = 0;
	set = size * size;
	while (indx < set)
	{
		if (indx % (size + 1) == 0)
			sum += a[indx];
		indx++;
	}
	printf("%d, ", sum);

	sum = 0;
	indx = 0;
	while (indx < set)
	{
		if (indx % (size - 1) == 0 && indx != (set - 1) && indx != 0)
			sum += a[indx];
		indx++;
	}
	printf("%d\n", sum);
}
