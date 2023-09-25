#include "main.h"

/**
 * _memset - Fill memory area
 * @s: buffer
 * @b: bytes
 * @n: area to fill
 * Return: new mem area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int mem;

	for (mem = 0; mem < n; mem++)
	{
		s[mem] = b;
	}
	return (s);
}
