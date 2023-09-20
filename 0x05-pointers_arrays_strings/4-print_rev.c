#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: This is the input string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int indx;

	for (indx = 0; s[indx] != '\0'; indx++)
		;
	for (indx = indx - 1; s[indx] != '\0'; indx--)
	{
		_putchar(s[indx]);
	}
	_putchar('\n');
}
