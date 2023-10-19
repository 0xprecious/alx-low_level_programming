#include "lists.h"

/**
 * add_node_end - append a list
 * @head: head
 * @str: string input
 * descr--> insert = new node, block = existing node
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *insert, *block;
	size_t ndx;

	insert = malloc(sizeof(list_t));
	if (insert == NULL)
		return (NULL);

	insert->str = strdup(str);

	for (ndx = 0; str[ndx]; ndx++)
		;

	insert->len = ndx;
	insert->next = NULL;
	block = *head;

	if (block == NULL)
	{
		*head = insert;
	}
	else
	{
		while (block->next != NULL)
			block = block->next;
		block->next = insert;
	}

	return (*head);
}
