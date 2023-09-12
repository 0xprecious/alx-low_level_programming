#include "main.h"
/**
 *print_alphabet - print lowercase alphas
 *Return: nothing
 */
void print_alphabet(void)
{
char alpha_array[26] = "abcdefghijklmnopqrstuvwxyz";

int indx;
for (indx = 0; indx <= 25; indx++)
{
_putchar(alpha_array[indx]);
}
_putchar('\n');
}
