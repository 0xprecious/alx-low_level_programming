#include "main.h"

/**
 * _puts - print a strng to stdout
 *
 * @str: string
 *
 */

void _puts(char *str)
{
	int indx;

	for (indx = 0; str[indx] != '\0'; indx++)
	{
		_putchar(str[indx]);
	}
	_putchar('\n');
}
