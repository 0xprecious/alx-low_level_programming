#include <unistd.h>

/**
 * _putchar - write to standard output
 * @c: char
 * Return: result
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
