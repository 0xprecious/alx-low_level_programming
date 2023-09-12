#include "main.h"
/**
 *times_table - multiolication table 9
 *Return: nothing
 */
void times_table(void)
{
	int i, j, prd;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10;  j++)
		{
			prd = i * j;
			if (j == 0)
			{
				_putchar('0' + prd);
			}
			else if (prd >= 10)
			{
				_putchar(' ');
				_putchar('0' + (prd / 10));
				_putchar('0' + (prd % 10));
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(prd + '0');
			}
			if (j != 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
