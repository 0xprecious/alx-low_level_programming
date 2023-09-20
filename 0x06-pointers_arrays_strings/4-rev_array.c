#include "main.h"

/**
 * reverse_array - reverse array of int
 * @a: array
 * @n: number of elements
 */

void reverse_array(int *a, int n)
{
	int indx;
	int flag;

	for (indx = 0; indx < (n / 2); indx++)
	{
		flag = a[indx];
		a[indx] = a[n - indx - 1];
		a[n - indx - 1] = flag;
	}
}
