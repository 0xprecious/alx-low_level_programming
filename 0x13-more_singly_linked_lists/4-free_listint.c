#include "lists.h"

/**
 * free_listint - free mem block kf a node
 * @head: head of nid3
 * Return: nothjnf
 */
void free_listint(listint_t *head)
{
	listint_t *t;

	while (head != NULL)
	{
		t = head;
		head = head->next;
		free(t);
	}
}
