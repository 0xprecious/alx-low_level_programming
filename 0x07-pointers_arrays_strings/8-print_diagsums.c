#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - sum of diagonals of a matrix
 * @a: matrix
 * @size: size
 */
void print_diagsums(int *a, int size)
{
	int sum;
	unsigned int x = 0;
	unsigned int y = 0;

	for (sum = 0; sum < size; sum++)
	{
		x += a[(size * sum) + sum];
		y += a[(size * (sum + 1)) - (sum + 1)];
	}

	printf("%d, %d\n", x, y);
}
