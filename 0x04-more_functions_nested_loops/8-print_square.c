#include "main.h"

/**
 * print_square - draws a square
 * @size: length and width of square
 * Return: Always 0.
 */

void print_square(int size)
{
int i,j;

if(size > 0)
{	
int i = 0;
while(i < size )
{
j = 0;
while(j < size)
{
_putchar('#');
j++;
} 
_putchar('\n');
i++;
}
}
else
{
_putchar('\n')
}
