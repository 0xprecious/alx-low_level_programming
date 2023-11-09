#include <stdio.h>
/**
  *array_iterator - run a function passed as a param
  *@array: array
  *@size: array size
  *@action: address of function
  *Return: no
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int ind;

	if (array && size > 0 && action)
	{
		ind = 0;

		while (ind < size)
		{
			action(array[ind]);
			ind++;
		}
	}
}
