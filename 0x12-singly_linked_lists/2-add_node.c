#include "lists.h"
/**
 * add_node - insert new node
 * @head: beginig (head of node)
 * @str: string to insrt
 * Return: result
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *insert;
	size_t ndx;

	insert = malloc(sizeof(list_t));
	if (insert == NULL)
		return (NULL);

	insert->str = strdup(str);

	for (ndx = 0; str[ndx]; ndx++)
		;

	insert->len = ndx;
	insert->next = *head;
	*head = insert;

	return (*head);
}
