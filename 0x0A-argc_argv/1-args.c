#include <stdio.h>
/**
 * main - print no. of arg
 * @args: arg index
 * @argv: arg array
 *
 * Return: This return to 0
 *
 */
int main(int args, char *argv[])
{
	printf("%d\n", args - 1);
	(void)argv;
	return (0);
}
