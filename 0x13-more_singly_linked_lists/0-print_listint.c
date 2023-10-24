#include "lists.h"

/**
 * print_listint - print element kf a list node
 * @h: head node of list
 * Return: number of nodes jn the list
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *n = h;
	size_t ndx = 0;

	while (n != NULL)
	{
		printf("%d\n", ndx->n);
		ndx += 1;
		cursor = n->next;
	}
	return (ndx);
}
