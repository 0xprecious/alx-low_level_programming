#include "main.h"
/**
 *print_last_digit - print last digit
 *@n: int input
 *Return: last digit.
 */
int print_last_digit(int n)
{
	int lstD;

	if (n >= 0)
	{
		lstD = n % 10;
	}
	else
	{
		lstD = (n % 10) * -1;
	}
	_putchar('0' + lstD);
	return (lstD);
}
