#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - nide sum
 * @head : node head
 * Return: result
 */
int sum_listint(listint_t *head)
{
int a;

a =  0;

while (head)
{
a += head->next;
head = head->next;
}
return (a);
}
