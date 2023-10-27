#include <stdio.h>
#include <stdlib.h>

/**
 * main - change at a store
 * @args: arg array
 * @argv: arg array index
 * Return: result
 */

int main(int args, char *argv[])
{
	int  chan, cash = 0;

	if (args != 2)
	{
		printf("Error\n");
		return (1);
	}
	chan = atoi(argv[1]);
	if (chan < 0)
	{
		printf("0\n");
		return (0);
	}
	for (; chan >= 0;)
	{
		if (chan >= 25)
			chan -= 25;

		else if (chan >= 10)
			chan -= 10;

		else if (chan >= 5)
			chan -= 5;

		else if (chan >= 2)
			chan -= 2;

		else if (chan >= 1)
			chan -= 1;
		else
			break;
		cash += 1;
	}
	printf("%d\n", cash);
	return (0);
}
