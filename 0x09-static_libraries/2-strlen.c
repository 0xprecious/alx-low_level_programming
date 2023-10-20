#include "main.h"

/**
 * _strlen - string length
 * @s: string
 * Return: strlen
 */
int _strlen(char *s)
{
	int indx;

	for (indx = 0; s[indx] != '\0' ; indx++)
		;
	return (indx);
}
