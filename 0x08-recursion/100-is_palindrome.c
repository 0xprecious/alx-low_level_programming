p#include "main.h"
/**
  * checkers_len - check strlen
  * @str: string in
  * Return: strlen out
**/
int checkers_len(char *str)
{
	if (*str == '\0')
		return (0);
	return (1 + checkers_len(str + 1));
}

/**
 * checkes_pal - check for palindrome
 * @indx: count index
 * @len: string len
 * @strr: is the string
 * Return: result
 * error code: 0
**/
int checkp(int indx, int len, char *strr)
{
	if (len > 0)
	{
		if (strr[indx] == strr[len])
		{
			return (checkers_pal(indx + 1, len - 1, strr));
		}
		else if (strr[indx] != strr[len])
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	return (1);
}


/**
  * is_palindrome - Check for palindrom in a string
  * @s: string in
  * Return: 1 - true, 0 - false
**/
int is_palindrome(char *s)
{
	return (checkers_pal(0, checkers_len(s) - 1, s));
}
