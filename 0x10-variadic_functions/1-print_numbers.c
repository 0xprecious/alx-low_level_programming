#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
  *print_numbers - print numbers
  *@separator: seperator
  *@n: number of integer param
  *Return: no
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list num;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num, int));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(num);
}
