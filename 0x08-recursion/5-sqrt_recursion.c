#include "main.h"
/**
  *checkers - checks if square root of a number exists
  *@no: number
  *@pos: poissible squarr root of number
  *
  *Return: result
  *error code: -1
  */
int checkers(int no, int pos)
{
	if ((pos * pos) == no)
	{
		return (pos);
	}
	else
	{
		if ((pos * pos) > no)
			return (-1);
		else
			return (checkers(no, pos + 1));

	}
}

/**
  *_sqrt_recursion - square root
  *@n: number in
  *Return: squareroot out
  *error code: -1
  */
int _sqrt_recursion(int n)
{
	/*test case*/
	if (n < 0)
		return (-1);
	else
		return (checkers(n, 0));
}
