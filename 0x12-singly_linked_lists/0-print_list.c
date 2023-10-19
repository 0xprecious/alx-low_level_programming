#include "lists.h"
/**
 * print_list - SL elements at once
 * @h: list to orint
 * Return: result
 */

size_t print_list(const list_t *h)
{
	size_t el_no;
	char msg[] = "nill"

	el_no = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, msg);
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		el_no++;
	}
	return (el_no);
}
