#include "main.h"
#include <string.h>
/**
* _strlen -> function to get the length of a string
* @s: string pointer to passed to this function
* Return: returns length of the string
*/
int _strlen(char *s)
{
char *str;
int len;

for (; *s != '\0'; s++)
{
len += 1;
}
str = "Holberton!";
len = _strlen(str);
printf("%d\n", len);
return (0);
}
