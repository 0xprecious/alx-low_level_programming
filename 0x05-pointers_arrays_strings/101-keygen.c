#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - generate valid PWs randomely
 *Return: 0 always
 *
 */
int main(void)
{
	int pw, add;

	srand(time(NULL));
	add = 0;
	while (add <= 2645)
	{
		pw = (rand() % 128);
		add += pw;
		printf("%c", pw);
	}
	printf("%c", 2772 - add);

	return (0);
}
