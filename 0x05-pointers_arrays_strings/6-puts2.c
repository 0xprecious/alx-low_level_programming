#include "main.h"
/**
 *puts2 - print on skip one character in string.
 *@str: string.
 *
 *Return: no.
 */
void puts2(char *str)
{
	int indx;

	indx = 0;
	while (str[indx] != '\0')
	{
		if (indx % 2 == 0)
		{
			_putchar(str[i]);
		}
		indx++;
	}
	_putchar('\n');
}
