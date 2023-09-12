#include <stdio.h>
/**
 *main - fibonachi of n = 50
 *Return: 0
 */
int main(void)
{
	int indx;
	unsigned long fibo_a = 0, fibo_b = 1, add;

	for (indx = 0; indx < 50; indx++)
	{
		add = fibo_a + fibo_b;
		printf("%lu", add);
		fibo_a = fibo_b;
		fibo_b = add;

		if (indx == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
