#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - sum up positve ints
 * @argc: arg indx
 * @argv: arg array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int add = 0, ndx;

	if (argc > 1)
	{
		for (ndx = 1; ndx < argc; ndx++)
		{
			int i;
			char *s;

			s = argv[ndx];
			for (i = 0; s[i] != '\0'; i++)
			{
				if (s[i] < 48 || s[i] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
		}
	}
	for (ndx = 1; ndx < argc; ndx++)
	{
		add += atoi(argv[ndx]);
	}
	printf("%d\n", add);
	return (0);
}
