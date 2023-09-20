#include "main.h"

/**
 * leet - 1337 encoding
 * @s: string
 *
 * Return: encoded string
 */
char *leet(char *s)
{
	int indx, join;

	char *i = "aAeEoOtTlL";
	char *j = "4433007711";

	for (indx = 0; s[indx] != '\0'; indx++)
	{
		for (join = 0; join < 10; join++)
		{
			if (s[indx] == i[join])
			{
				s[indx] = j[join];
			}
		}
	}

	return (s);
}
