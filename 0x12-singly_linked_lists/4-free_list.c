#include "lists.h"

/**
 * free_list - release mem for a list
 * @head: address to head node
 * Return: not applicable
 */

void free_list(list_t *head)
{
	list_t *block;

	while ((block = head) != NULL)
	{
		head = head->next;
		free(block->str);
		free(block);
	}
}
