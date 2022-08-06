#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - prints the opcodes
* @argc: argument counter
* @argv: argument vector
*
* Return: Always 0 (Sucess)
*/
int main(int argc, char *argv[])
{
if (argc != 2)
{
printf("Error\n");
exit(1);
}

if (atoiarg[1] < 0)
{
printf("Error\n");
exit(2);
}

for (count = 0; count < atoiarg[1]; count++)
{
printf("%02hhx", *((char *)main + count));
if (count < atoiarg[1] - 1)
printf(" ");
else
printf("\n")
}
return (0);
}
