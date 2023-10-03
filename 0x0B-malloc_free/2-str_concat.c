#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  *str_concat - concat 2 strngs with a NULL termination at the end
  *@s1: str1 in
  *@s2: str2 in
  *
  *Return: results or NULL on failure
  */
char *str_concat(char *s1, char *s2)
{
	unsigned int s1_len, s2_len, qty, indx, count;
	char *strr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_len = 0;
	while (s1[s1_len] != '\0')
		s1_len++;
	s2_len = 0;
	while (s2[s2_len] != '\0')
		s2_len++;

	qty = s1_len + s2_len;

	strr = malloc((sizeof(char) * qty) + 1);
	/*always confirm malloc status*/
	if (strr == NULL)
		return (NULL);

	indx = 0;
	while (indx < s1_len)
	{
		strr[indx] = s1[indx];
		i++;
	}
	count = 0;
	while (indx <= qty)
	{
		strr[indx] = s2[count];
		indx++;
		count++;
	}
	return (strr);
}
