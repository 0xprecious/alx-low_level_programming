#include "main.h"
/**
 * puts_half - print half string and a new line
 * @str: string
 * Return: no
 */
void puts_half(char *str)
{
	int indx, h;

	indx = 0;
	while (str[indx] != '\0')
		indx++;

	h = indx / 2;

	if (indx % 2 == 1)
		h++;

	while (h < indx)
	{
		_putchar(str[h]);
		h++;
	}
	_putchar('\n');
}
