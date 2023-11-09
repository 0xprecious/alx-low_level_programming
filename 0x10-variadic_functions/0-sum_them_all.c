#include <stdarg.h>
/**
  *sum_them_all - sum up all param
  *@n: number of args,
  *Return: result or 0 on error
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int add = 0, i;
	va_list arglist;

	if (n == 0)
		return (0);

	va_start(arglist, n);

	for (i = 0; i < n; i++)
	{
		add += va_arg(arglist, int);
	}
	va_end(arglist);

	return (add);
}
