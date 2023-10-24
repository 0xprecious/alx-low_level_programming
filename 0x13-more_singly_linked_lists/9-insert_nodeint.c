#include "lists.h"
/**
 * insert_nodeint_at_index - insert
 * @head: head of node bkocm
 * @idx: index of nkde
 * @n: insert element
 * Return: new node list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *i, *t = *head;
unsigned int nd;

i = malloc(sizeof(listint_t));

if (i == NULL)
return (NULL);

insrt->n = n;

if (idx == 0)
{
i->next = t;
*head = i;
return (i);
}

for (nd = 0; nd < (idx - 1); nd++)
{
if (t == NULL || t->next == NULL)
return (NULL);

tmpt = t->next;
}

i->next = t->next;
t->next = i;

return (i);
}
