#include "main.h"
#include <stdlib.h>
/**
  *_strdup - duplicate string input from param
  *@str: str in
  *Return: result or NULL if str do not exist
  */
char *_strdup(char *str)
{
	char *strr;
	unsigned int slen, count;

	/* check is str is null */
	if (str == NULL)
	{
		return (NULL);
	}


	slen = 0;
	while (str[slen] != '\0')
	{
		slen++;
	}

	strr = malloc(sizeof(char) * (slen + 1));

	/*always check malloc status*/
	if (strr == NULL)
	{
		return (NULL);
	}

	for (count = 0; count < slen; count++)
	{
		strr[count] = str[count];
	}
	strr[slen] = '\0';
	return (strr);

}
