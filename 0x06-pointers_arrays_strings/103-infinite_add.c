#include "main.h"

/**
 * rev_string - reverse an array
 * @num_in: int input
 * Return: 0
 */

void rev_string(char *num_in)
{
	int i = 0;
	int j = 0;
	char buf;

	while (*(num_in + i) != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j < i; j++, i--)
	{
		buf = *(num_in + j);
		*(num_in + j) = *(num_in + i);
		*(num_in + i) = buf;
	}
}

/**
 * infinite_add - add numbers
 * @n1: first num
 * @n2: second num
 * @r: buffer
 * @size_r: buffer size
 * Return: function ptr
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int over = 0, i = 0, j = 0, num = 0;
	int v1 = 0, v2 = 0, buf_sum = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || over == 1)
	{
		if (i < 0)
			v1 = 0;
		else
			v1 = *(n1 + i) - '0';
		if (j < 0)
			v2 = 0;
		else
			v2 = *(n2 + j) - '0';
		buf_sum = v1 + v2 + over;
		if (buf_sum >= 10)
			over = 1;
		else
			over = 0;
		if (num >= (size_r - 1))
			return (0);
		*(r + num) = (buf_sum % 10) + '0';
		num++;
		j--;
		i--;
	}
	if (num == size_r)
		return (0);
	*(r + num) = '\0';
	rev_string(r);
	return (r);
}
