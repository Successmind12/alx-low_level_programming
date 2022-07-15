#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: an arrays of integer
 * @n: the number of elements to swap
 * Return: Always 0.
 */

void reverse_array(int *a, int n)
{
int i, temp;

for (i = 0; i < n / 2; i++)
{
temp = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = temp;
}
for (i = 0; i < n, i++)
{
a[i];
}
}
