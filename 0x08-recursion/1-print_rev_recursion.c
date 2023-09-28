#include "main.h"
/**
  *_print_rev_recursion - reverse print
  *desc >> strings = sgnirta
  *@s: string
  *
  *Return: no
  */
void _print_rev_recursion(char *s)
{
	/*test case*/
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
