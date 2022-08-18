#include <stdlib.h>
#include "lists.h"

/**
* free_listint - frees list
* @head: head of linked list
*/
void free_listint(list_t *head)
{
listint_t *tmp;
listint_t *next;
tmp = head;
while (tmp != NULL)
{
next = tmp->next;
free(tmp->str);
free(tmp);
tmp = next;
}
}
