#include "lists.h"

/**
* listint_len - print all the elements of list_t
* @h: head of the list
*
* Return: the number of elements
*/
size_t listint_len(const list_t *h)
{
const listint_t *cursor = h;
size_t count = 0;

while (cursor != NULL)
{
count += 1;
cursor = cursor->next;
}
return (count);
}
