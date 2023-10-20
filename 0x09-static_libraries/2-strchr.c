#include "main.h"

/**
 * _strchr - search engine for a char in a string
 * @s: string
 * @c: char
 *
 * Return: search result,NULL if not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}
	return (s + 1);
}
