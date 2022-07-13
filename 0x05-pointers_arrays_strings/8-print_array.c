#include "main.h"
#include <stdio.h>

/**
 * function that prints n elements of an array of integers
 * @n: input parameters are int *a, int n
 * void print_array(int *a, int n) is the function used
 * Return: Always 0.
 */

void print_array(int *a, int n)
{
int i;

	for ( i = 0; i < n; i++)

	{

		printf("%d", a[i]);

		if (i != n-1)

		{

			printf(",");

			printf(" ");

		}

	}

	printf("\n");

}
