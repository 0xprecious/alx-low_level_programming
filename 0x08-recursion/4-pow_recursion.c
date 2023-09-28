#include "main.h"
/**
  *_pow_recursion - x raised to power y
  *desc >> x ^ y
  *@x: base
  *@y: power
  *
  *Return: result
  *error code >> -1
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
