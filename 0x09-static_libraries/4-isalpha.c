#include "main.h"
/**
 *_isalpha - find alphabet
 *@c: char inputs
 *Return: 1 - alphabet, 0 - is not
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') ||
	(c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
