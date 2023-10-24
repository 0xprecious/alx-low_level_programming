#include "lists.h"

/**
 * listint_len - lwngth of  list node
 * @h: head of list node
 * Return: liat len
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *n = h;
	size_t ndx = 0;

	while (n != NULL)
	{
		ndx += 1;
		n = n->next;
	}
	return (ndx);
}

