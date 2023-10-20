#include "main.h"

/**
 * _strpbrk - Search for a model mem area in a string
 * @s: string
 * @accept: string model
 * Return: search result or NULL if not found
 */
char *_strpbrk(char *s, char *accept)
{
	int indx, box;
	char *ptrr;

	indx = 0;
	while (s[indx] != '\0')
	{
		box = 0;
		while (accept[box] != '\0')
		{
			if (accept[box] == s[indx])
			{
				ptrr = &s[indx];
				return (ptrr);
			}
			box++;
		}
		indx++;
	}
	return (0);
}
