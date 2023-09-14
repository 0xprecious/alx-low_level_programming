#include "main.h"

/**
 * largest_number - take 3 inputs and comput the greatest number
 * @a: first in
 * @b: second in
 * @c: third in
 * Return: greatest
 */

int largest_number(int a, int b, int c)
{
int g;

if (a > b)
{
if (a > c)
{
g = a;
}
else
{
g = c;
}
}
else if (b > c)
{
g = b;
}
else
{
g = c;
}
return (g);
}
