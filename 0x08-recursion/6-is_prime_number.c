#include "main.h"
/**
  *checkers - check for prime factor
  *@no: number
  *@pos: possible factor
  *Return: result
  * 0 false 1 true
  */
int checkers(int no, int pos)
{
	if (pos < no)
	{
		if (no % pos == 0)
		{
			return (0);
		}
		else
		{
			return (checkers(no, pos + 1));
		}
	}
	else
	{
		return (1);
	}
}

/**
  *is_prime_number - check if number is prime
  *@n: number in
  *
  *Return: result
  * 0 false, 1 true
  */
int is_prime_number(int n)
{
	/*test case*/
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (checkers(n, 2));
	}
}
