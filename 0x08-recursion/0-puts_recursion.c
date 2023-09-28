#include "main.h"
/**
  *_puts_recursion - print string
  *@s: string
  *
  *Return: no
  */
void _puts_recursion(char *s)
{
	/*test case*/
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
