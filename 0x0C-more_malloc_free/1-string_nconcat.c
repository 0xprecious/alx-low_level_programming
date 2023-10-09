#include <stdlib.h>
#include <stdlib.h>
#include "main.h"
/**
 * calc_strlen - calculate strlen
 * @stg: strin
 * Return: length of string
 */
int calc_strlen(char *stg)
{
	int i;

	for (i = 0; stg[i] != '\0'; i++)
		;
	return (i);
}
/**
 * string_nconcat - concatenate s1 and n bytes of s2; return ptr to string
 * @s1: string 1
 * @s2: string 2
 * @n: concst byte
 * Return: pointer to new str
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *point;
	int num, len, i, j;

	num = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (num < 0)
		return (NULL);
	if (num >= calc_strlen(s2))
		num = calc_strlen(s2);

	len = calc_strlen(s1) + num + 1;

	ptr = malloc(sizeof(*point) * len);
	if (point == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++) /* concat */
		ptr[i] = s1[i];
	for (j = 0; j < num; j++)
		point[i + j] = s2[j];
	point[i + j] = '\0';

	return (point);
}
