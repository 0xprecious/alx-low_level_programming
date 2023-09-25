#include "main.h"

/**
 * set_string - set the values of a ptr to a char
 * dereferencing in short
 * @s: ptr to a ptr
 * @to: char ptr
 */

void set_string(char **s, char *to)
{
	*s = to;
}
