#include "main.h"

/**
 * _memcpy - copy a mem area
 * @dest: copy to
 * @src: copy from
 * @n: size to copt
 * Return: new mem
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int mem;

	for (mem = 0; mem < n; mem++)
	{
		dest[mem] = src[mem];
	}
	return (dest);
}
