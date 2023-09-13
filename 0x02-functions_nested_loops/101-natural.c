#include <stdio.h>
/**
 *main - factors of 3 and 5
 *Return: 0
 */
int main(void)
{
	int i = 1024, j, add = 0;

	for (j = 0; j < i; j++)
	{
		if ((j % 3 == 0) || (j % 5 == 0))
		{
			add = add + j;
		}
	}
	printf("%d\n", add);
	return (0);
}
