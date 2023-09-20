#include "main.h"

/**
 * cap_string - capitalize a string
 * @str: string
 * Return: capitalized strng
 */

char *cap_string(char *str)
{
	int indx, count;
	int flag;
	char nill[] = ",;.!?(){}\n\t\" ";

	for (indx = 0, flag = 0; str[indx] != '\0'; indx++)
	{
		if (str[0] > 96 && str[0] < 123)
			flag = 1;
		for (count = 0; nill[count] != '\0'; count++)
		{
			if (nill[count] == str[indx])
				flag = 1;
		}

		if (flag)
		{
			if (str[indx] > 96 && str[indx] < 123)
			{
				str[indx] -= 32;
				flag = 0;
			}
			else if (str[indx] > 64 && str[indx] < 91)
				flag = 0;
			else if (str[indx] > 47 && str[indx] < 58)
				flag = 0;
		}
	}
	return (str);
}
