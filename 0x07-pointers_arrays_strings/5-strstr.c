#include "main.h"
#include <stdlib.h>
/**
 * _strstr - search for a substring
 * @haystack: string
 * @needle: substring
 * Return: search result or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int indx, box, srch;

	indx = 0;
	srch = 0;
	while (haystack[indx] != '\0')
	{
		box = 0;
		while (needle[box + srch] != '\0' && haystack[indx + srch] != '\0'
			&& needle[box + srch] == haystack[indx + srch])
		{
			if (haystack[indx + srch] != needle[box + srch])
				break;
			srch++;
		}
		if (needle[box + srch] == '\0')
			return (&haystack[indx]);
		box++;
		indx++;
	}
	return (NULL);
}
