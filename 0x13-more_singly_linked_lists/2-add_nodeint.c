#include "lists.h"

/**
 * add_nodeint - add node to a node
 * @head: nlock head
 * @n: list content
 * Return: new list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node != NULL)
	{
		node->n = n;
		node->next = *head;
	}
	else
		return (NULL);
	if (*head != NULL)
		node->next = *head;
	*head = node;
	return (node);
}
