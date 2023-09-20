#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int origin, count, indx;

	origin = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (origin < size)
	{
		count = size - origin < 10 ? size - origin : 10;
		printf("%08x: ", origin);
		for (indx = 0; indx < 10; indx++)
		{
			if (indx < count)
				printf("%02x", *(b + origin + indx));
			else
				printf("  ");
			if (indx % 2)
			{
				printf(" ");
			}
		}
		for (indx = 0; indx < count; indx++)
		{
			int class = *(b + origin + indx);

			if (class < 32 || class > 132)
			{
				class = '.';
			}
			printf("%c", class);
		}
		printf("\n");
		origin += 10;
	}
}
