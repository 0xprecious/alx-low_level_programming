#include "lists.h"

/**
 * reverse_listint - list edon reverse
 * @head: node head
 * Return: reversed node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *nd;
	listint_t *i;

	nd= NULL;
	i = NULL;

	while (*head != NULL)
	{
		i = (*head)->next;
		(*head)->next = nd;
		nd = *head;
		*head = i;
	}

	*head = nd;
	return (*head);
}
