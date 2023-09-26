#include "main.h"

/**
 * _strspn - look for a substring
 * @s: array of char
 * @accept: search area
 *
 * Return: search result 
 */
unsigned int _strspn(char *s, char *accept)
{
	int indx;
	int box;
	int srch;

	indx = 0;
	srch = 0;
	while (s[indx]  != '\0')
	{
		box = 0;
		while (accept[box] != '\0')
		{
			if (s[indx] == accept[box])
			{
				srch++;
				break;
			}
			box++;
		}
		if (accept[box] == '\0')
			break;
		indx++;
	}
	return (srch);
}
