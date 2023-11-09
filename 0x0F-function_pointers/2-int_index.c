/**
  *int_index - search engine (search fir an int)
  *@array: array of int
  *@size: array size
  *@cmp: ptr of compare func
  *
  *Return: result, error is -1
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, result;

	result = -1;
	if (array && cmp)
	{

		if (size <= 0)
		{
			return (result);
		}
		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
			if (cmp(array[i]) > 0)
			{
				result = i;
				break;
			}
			if ((cmp(array[i]) == (-1)))
			{
				return (result);
			}
		}

	}
	return (result);
}
