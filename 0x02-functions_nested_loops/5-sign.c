#include "main.h"
/**
 *print_sign - positive or negative number
 *@n: int input
 *Return: 1 - positive, 0 - zero, -1 - negative
 */
int print_sign(int n)
{
	int rtrn;

	if (n > 0)
	{
		_putchar('+');
		rtrn = 1;
	}
	if (n == 0)
	{
		_putchar('0');
		rtrn = 0;
	}
	if (n < 0)
	{
		_putchar('-');
		rtrn = -1;
	}
	return (rtrn);
}
