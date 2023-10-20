#include <stdio.h>
#include <stdlib.h>

/**
 *main - print all arg inout
 *@argc: index
 *@argv: array
 *Return: result
 */

int main(int argc, char *argv[])
{
	int ndx;

	for (ndx = 0; ndx < argc; ndx++)
	{
		printf("%s\n", argv[ndx]);
	}
	return (0);
}
