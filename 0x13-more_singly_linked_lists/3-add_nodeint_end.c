#include "lists.h"

/**
 * add_nodeint_end - append a list
 * @head: block head
 * @n: list content
 * Return: new  node list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *n= *head;

	node = malloc(sizeof(listint_t));
	if (node != NULL)
	{
		node->n = n;
		node->next = NULL;
	}
	else
		return (NULL);
	if (n != NULL)
	{
		while (n->next != NULL)
			n = n->next;
		n->next = node;
	}
	else
		*head = node;
	return (node);
}
