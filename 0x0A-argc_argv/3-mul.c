#include <stdio.h>
#include <stdlib.h>
/**
 * main - product of 2 numbers
 * @argc: arg index
 * @argv: arg array
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int ndx, product;

	product = 1;
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (ndx = 1; ndx < argc; ndx++)
	{
		product = product * atoi(argv[ndx]);
	}
	printf("%d\n", product);
	return (0);
}
