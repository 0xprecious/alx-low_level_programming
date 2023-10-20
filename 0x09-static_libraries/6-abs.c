#include "main.h"
/**
 *_abs - find absolute value.
 *@n: int input
 *Return: absolute value
 */
int _abs(int n)
{
	int abs;

	if (n > 0)
	{
		abs = n * 1;
	}
	if (n == 0)
	{
		abs = 0;
	}
	if (n < 0)
	{
		abs = n * -1;
	}
	return (abs);
}
