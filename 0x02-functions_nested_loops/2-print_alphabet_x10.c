#include "main.h"
/**
 *print_alphabet_x10 - print alpha x10
 *@void: no arguments.
 *
 *Return: no return value.
 */
void print_alphabet_x10(void)
{
	char alpha_array[26] = "abcdefghijklmnopqrstuvwxyz";
	int lines, steps;

	for (steps = 0; steps <= 9; steps++)
	{
		for (lines = 0; lines <= 25; lines++)
		{
			_putchar(alpha_array[lines];
		}
		_putchar('\n');
	}
}
