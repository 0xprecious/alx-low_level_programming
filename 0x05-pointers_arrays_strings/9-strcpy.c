#include "main.h"

/**
 * _strcpy - Copy string content
 * @dest: destiny
 * @src: source
 *
 * Return: copied
 */
char *_strcpy(char *dest, char *src)
{
	char *copied = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (copied);
}
