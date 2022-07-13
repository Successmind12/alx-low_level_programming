#include "main.h"

/** 
 * function that swaps the values of two integers.
 * @n: input paramters required, int*a, int *b
 * Return: Always 0.
 */ 

void swap_int(int *a, int *b)
{
int c = *a;

*a = *b;
*b = c;
}


