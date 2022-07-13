#include "main.h"
#include <stdio.h>

/**
 * function that prints a string, followed by a new line, to stdou
 * @n: input parameters include char *str
 * Return: Always 0 
 */

void _puts(char *str)
{
int i; // positions of each string

for ( i = 0; str[i] != '\0' ; i++)
{	
_putchar(str[i]);
}
_putchar('\n');
}
