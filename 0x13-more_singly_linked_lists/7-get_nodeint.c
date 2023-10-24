#include "lists.h"
/**
 * get_nodeint_at_index - find
 * @head : liat head
 * @index: index if list
 * Return: result
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
size_t i;

for (i = 0; (i < index) && (head->next); i++)
head = head->next;

if (i < index)
return (NULL);

return (head);
}
