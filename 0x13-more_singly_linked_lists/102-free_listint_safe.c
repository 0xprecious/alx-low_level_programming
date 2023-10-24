#include "lists.h"

/**
 * free_listpos2 - free a list
 * @head: list head
 * Return: null
 */
void free_listpos2(listpos_t **head)
{
	listpos_t *t;
	listpos_t *bnode;

	if (head != NULL)
	{
		bnode = *head;
		while ((t = node) != NULL)
		{
			bnode = bnode->next;
			free(t);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - safe free list
 * @h: node head
 * Return: freed mem
 */
size_t free_listint_safe(listint_t **h)
{
	size_t blnode = 0;
	listpos_t *phead, *new, *app;
	listint_t *node;

	phead = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listpos_t));

		if (new == NULL)
			exit(98);

		new->phead = (void *)*h;
		new->next = phead;
		phead = new;

		app = phead;

		while (app->next != NULL)
		{
			app = app->next;
			if (*h == app->p)
			{
				*h = NULL;
				free_listpos2(&phead);
				return (blnode);
			}
		}

		blnode = *h;
		*h = (*h)->next;
		free(blnode);
		blnode++;
	}

	*h = NULL;
	free_listpos2(&phead);
	return (blnode);
}
