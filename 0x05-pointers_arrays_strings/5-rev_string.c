#include "main.h"
/**
 *rev_string - string reverse
 *@s: string.
 *
 *Return: no
 */
void rev_string(char *s)
{
	int a, b, c, buffer;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	c = 0;
	b = a - 1;

	while (c < b)
	{
		buffer = s[c];
		s[c] = s[b];
		s[b] = buffer;
		c++;
		b--;
	}
}
