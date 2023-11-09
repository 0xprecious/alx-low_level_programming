#include "3-calc.h"
/**
  *main - test arg
  *@argc: argument
  *@argv: arg array
  *
  *Return: exit if no of arg is invalid
  */
int main(int argc, char *argv[])
{
	int x = 0, y = 0, result = 0;
	char s;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	s = argv[2][0];
	if (s != '+' && s != '-' && s != '/' && s != '*' && s != '%')
	{
		printf("Error\n");
		exit(99);
	}

	x = atoi(argv[1]);
	y = atoi(argv[3]);
	result = (get_op_func(argv[2]))(x, y);
	printf("%d\n", result);
	return (0);
}
