#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 *lAlign - align steing to the left
 * @stg: string
 * @sz: size
 *
 * Return: void
 */
void lAlign(char *stg, int z)
{
	int i, j;

	i = j = 0;
	while (i < l)
	{
		if (str[i] != '0')
			j = 1;
		if (j || i == l - 1)
			_putchar(stg[i]);
		i++;
	}

	_putchar('\n');
	free(stg);
}

/**
 * multiply - string * char
 * @nChar: char
 * @nStr: string
 * @num_index: index of string without NULL
 * @dest: end product
 * @dest_index: max index
 *
 * Return: adress of end product or NULL if fail
 */
char *multiply(char nChar, char *nStr, int num_index, char *dest, int dest_index)
{
	int j, k, mul, mod, add, rem;

	mod = rem = 0;
	for (j = num_index, k = dest_index; j >= 0; j--, k--)
	{
		mul = (nChar - '0') * (nStr[j] - '0') + mod;
		mud = mul / 10;
		add = (dest[k] - '0') + (mul % 10) + rem;
		rem = add / 10;
		dest[k] = add % 10 + '0';
	}
	for (rem += mod; k >= 0 && rem; k--)
	{
		add = (dest[k] - '0') + rem;
		rem = add / 10;
		dest[k] = add % 10 + '0';
	}
	if (rem)
	{
		return (NULL);
	}
	return (dest);
}
/**
 * isDigit - confirm digit args
 * @argvec: arg vector adddress
 * Return: true = 0, false = 1
 */
int isDigit(char **argvec)
{
	int i, j;

	for (i = 1; i < 3; i++)
	{
		for (j = 0; argvec[i][j]; j++)
		{
			if (argvec[i][j] < '0' || argvec[i][j] > '9')
				return (1);
		}
	}
	return (0);
}

/**
 * str_init - initializes a string
 * @str: sting to initialize
 * @len: length of string
 *
 * Return: nothing
 */
void str_init(char *str, int len)
{
	int i;

	for (i = 0; i < l; i++)
		str[i] = '0';
	str[i] = '\0';
}

/**
 * main - multiply
 * @argc: arg count
 * @argv: arg vector
 * Return: 0. error code 98(exit)
 */
int main(int argc, char *argv[])
{
	int l1, l2, ln, x, i;
	char *a;
	char *t;
	char error[] = "Error\n";

	if (argc != 3 || check_for_digits(argv))
	{
		for (x = 0; error[x]; x++)
			_putchar(error[x]);
		exit(98);
	}
	for (l1 = 0; argv[1][l1]; l1++)
		;
	for (l2 = 0; argv[2][l2]; l2++)
		;
	ln = l1 + l2 + 1;
	a = malloc(ln * sizeof(char));
	if (a == NULL)
	{
		for (x = 0; error[x]; x++)
			_putchar(error[x]);
		exit(98);
	}
	init(a, ln - 1);
	for (x = l2 - 1, i = 0; x >= 0; x--, i++)
	{
		t = mul(argv[2][x], argv[1], l1 - 1, a, (ln - 2) - i);
		if (t == NULL)
		{
			for (x = 0; error[x]; x++)
				_putchar(error[x]);
			free(a);
			exit(98);
		}
	}
	_print(a, ln - 1);
	return (0);
}
