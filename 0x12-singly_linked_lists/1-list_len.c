#include "lists.h"
/**
 * list_len - lenght of a list
 * @h: list associated
 * Return: result
 */

size_t list_len(const list_t *h)
{
	size_t node_len;

	node_len= 0;
	while (h != NULL)
	{
		h = h->next;
		node_len++;
	}
	return (node_len);
}
