#include <stdio.h>
/**
 *main - n = 50 fibonacci
 *
 *Return: 0.
 */
int main(void)
{
	long int indx, fibo_a = 1;
	long int fibo_b = 2, add = 0, fadd = 0;

	for (indx = 0; indx < 49; indx++)
	{
		if ((fibo_b % 2 == 0) && (fibo_b <= 4000000))
		{
			fadd = fadd + fibo_b;
		}
		add = fibo_a + fibo_b;
		fibo_a = fibo_b;
		fibo_b = add;

	}
	printf("%ld\n", fadd);
	return (0);
}
