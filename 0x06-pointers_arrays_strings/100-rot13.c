#include "main.h"

/**
 * rot13 - rot13 encoding
 * @s: string
 *
 * Return: encoded string
 */

char *rot13(char *s)
{
	int indx, join;

	char nrml[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (indx = 0; s[indx] != '\0'; indx++)
	{
		for (join = 0; a[join] != '\0'; join++)
		{
			if (s[indx] == nrml[join])
			{
				s[indx] = rot[join];
				break;
			}
		}
	}

	return (s);
}
