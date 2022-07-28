#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates a char of arrays
 * @c: intialization value
 * @size: the size of the memory to print
 * Return: a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *new_array;

if (size == 0)
{
return (NULL);
}

new_array = malloc(sizeof(char) * size)

if (new_array == NULL)
{
return (NULL);
}

for (i = 0; i < size; i++)
{
new_array[i] = c
}

return (new_array);
}


