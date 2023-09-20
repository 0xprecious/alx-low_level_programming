#include "main.h"
#include <stdio.h>
/**
 * print_array - print elemwnt if array
 * @a: array.
 * @n: number of element in arrayeturn: void
 * Return: no
 */
void print_array(int *a, int n)
{
	int i

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}
