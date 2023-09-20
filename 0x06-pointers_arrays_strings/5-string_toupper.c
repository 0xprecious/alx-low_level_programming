#include "main.h"

/**
 * string_toupper - Change all lowercase to uppercsee
 * @c: string
 * Return: upper
 */

char *string_toupper(char *c)
{
	int indx;

	for (indx = 0; c[indx] != '\0'; indx++)
	{
		if (c[indx] > 96 && c[indx] < 123)
		{
			c[indx] -= 32;
		}
	}
	return (c);
}
