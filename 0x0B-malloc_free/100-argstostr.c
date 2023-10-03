#include "main.h"
#include <stdlib.h>
/**
  *argstostr - turn arguments into a string
  *@ac: arg coubt
  *@av: arg vector
  *Return: result or NULL if fail
  */
char *argstostr(int ac, char **av)
{
	int indx, count, i, qty;
	char *argument;

	qty = 0;
	i = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	indx = 0;
	while (indx < ac)
	{
		count = 0;
		while (av[indx][count])
		{
			qty++;
			count++;
		}
		qty++;
		indx++;
	}
	argument = malloc((sizeof(char) * qty) + 1);
	if (argument == NULL)
		return (NULL);
	indx = 0;
	while (indx < ac)
	{
		count = 0;
		while (av[indx][count])
		{
			argument[i] = av[indx][count];
			count++;
			i++;
		}
		argument[i] = '\n';
		i++;
		indx++;
	}
	argument[i] = '\0';
	return (argument);
}
