#include "lists.h"
/**
 * find_listint_loop - find
 * @head : node head
 * Return: found
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *nd1, *nd2;

if (head == NULL || head->next == NULL)
return (NULL);

nd1 = head->next;
nd2 = (head->next)->next;

while (nd2)
{
if (nd1 == nd2)
{
nd1 = head;

while (nd1 != nd2)
{
nd1 = nd1->next;
nd2 = nd2->next;
}

return (nd1);
}

nd1 = nd1->next;
nd2 = (nd2->next)->next;
}

return (NULL);
}
