#include "main.h"
/**
 * main - Print from array of characters
 * Return: 0
 */
int main(void)
{
int indx;
char array[10] = "_putchar\n";

for (indx = 0; indx <= 8; indx++)
{
_putchar(array[indx]);
}
return (0);
}

