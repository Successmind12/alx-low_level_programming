#include "main.h"

/**
 * function that prints half of a string
 * followed by a new line
 * void puts_half(char *str) is the function used
 *Return: Always 0.
 */

void puts_half(char *str)
{
int len; 
int counter;

for (len = 0; str[len] != '\0'; len++)
{
	
}
counter = (len + 1) / 2;
while (str[counter])
{
_putchar(str[counter]);
counter++
}
 								
_putchar('\n');
}
