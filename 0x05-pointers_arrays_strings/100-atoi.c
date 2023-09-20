#include "main.h"
/**
* _atoi - Conversion of string to int
* @s: string.
*
* Return: conv3rted
*/

int _atoi(char *s)
{
	int flag;
	unsigned int n;
	char *buf;

	buf = s;
	n = 0;
	flag = 1;
	while (*buf != '\0' && (*buf < '0' || *buf > '9'))
	{
		if (*buf == '-')
			flag *= -1;
		buf++;
	}
	if (*buf != '\0')
	{
		do {
			n = n * 10 + (*buf - '0');
			buf++;
		} while (*buf >= '0' && *buf <= '9');
	}
	return (n * flag);
}
