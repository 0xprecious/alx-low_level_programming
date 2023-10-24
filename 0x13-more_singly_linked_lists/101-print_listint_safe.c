#include "lists.h"

/**
 * free_listpos - free list helper func
 * @head: node head
 * Return: nothing
 */
void free_listpos(listp_t **head)
{
	listpos_t *t;
	listpos_t *nd;

	if (head != NULL)
	{
		nd = *head;
		while ((t = nd) != NULL)
		{
			nd = nd->next;
			free(nd);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - safe print list
 * @head: head of node
 * Return: node count
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t bnode = 0;
	listp_t *phead, *pr *app;

	phead = NULL;
	while (head != NULL)
	{
		pr = malloc(sizeof(listp_t));

		if (pr == NULL)
			exit(98);

		pr->phead = (void *)head;
		pr->next = phead;
		phead = pr;

		app = phead;

		while (app->next != NULL)
		{
			app = app->next;
			if (head == app->phead)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&phead);
				return (bnode);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		bnode++;
	}

	free_listpos(&phead);
	return (bnode);
}
