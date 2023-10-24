#include "lists.h"
/**
 * pop_listint - remove a node completely
 * @head : head of node blicm
 * Return: new node
 */
int pop_listint(listint_t **head)
{
listint_t *t;
int n;

t = *head;

if (t == NULL)
return (0);

*head = t->next;
n = t->n;
free(t);
return (n);
}
