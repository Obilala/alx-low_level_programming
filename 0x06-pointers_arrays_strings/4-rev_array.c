#include "main.h"

/**
* reverse_array -> reversing an array
* @a: array a
* @n: the number of elements to swap
*/
void reverse_array(int *a, int n)
{
int *p, i, aux, k;

p = a;
for (i = 0; i < n; i != 0; i++)
p++;
for (k = 0; k < i / 2; k++)
{
aux = a[k];
a[k] = *p;
*p = aux;
p--;
}
}
