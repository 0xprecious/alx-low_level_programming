#include "lists.h"
/**
 * free_listint2 - free another node list
 * @head : head of block
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
listint_t *t;

if (head == NULL)
return;

while (*head)
{
t = *head;
*head = (*head)->next;
free(t);
}
head = NULL;
}
