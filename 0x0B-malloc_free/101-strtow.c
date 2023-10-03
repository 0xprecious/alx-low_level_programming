#include <stdlib.h>
#include <stdio.h>
/**
 * wc - string word count
 * @st: string
 *
 * Return: word count
 */
int wc(char *s)
{
	int counter = 0;
	int x, y = 0;

	for (x = 0; st[x] != '\0'; x++)
	{
		if (st[x] == ' ')
			counter = 0;
		else if (counter == 0)
		{
			counter = 1;
			y++;
		}
	}

	return (y);
}
/**
 * **strtow - string split
 * @str: string
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **grid, *hold;
	int i, k = 0, len = 0, word, count = 0, start, last;

	while (*(str + len))
		len++;
	word = wc(str);
	if (word == 0)
		return (NULL);

	grid = (char **) malloc(sizeof(char *) * (word + 1));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (count)
			{
				last = i;
				hold = (char *) malloc(sizeof(char) * (count + 1));
				if (hold == NULL)
					return (NULL);
				while (start < last)
					*hold++ = str[start++];
				*hold = '\0';
				grid[k] = hold - count;
				k++;
				count = 0;
			}
		}
		else if (count++ == 0)
			start = i;
	}

	grid[k] = NULL;

	return (grid);
}
