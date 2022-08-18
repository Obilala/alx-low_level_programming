#include <stddef.h>
#include <stdio.h>
#include "lists.h"
/**
* struct listint_s - singly linked list
* @n: int - (malloc'ed string)
* @next: points to the next node
* Description: singly linked list node structure
* print - this function prints all the elements of a list
* @h: the pointer that points to the struct
*
* Return: the number of nodes
*/
size_t print(const listint_t *h, int count)
{
int s;
if (h == NULL)
return (count);
s = h->n;
printf("%d\n", s);
h = h->next;
count++;
return (print(h, count));
}

/**
* print_listint - print all the elements of list_t
* @h: the list passed
*
* Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
return (print(h, 0));
}
