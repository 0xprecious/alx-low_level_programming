#include "main.h"
/**
  *_strlen_recursion - string length
  *@s: string.
  *
  *Return: string len
  */
int _strlen_recursion(char *s)
{
	/*test case*/
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
