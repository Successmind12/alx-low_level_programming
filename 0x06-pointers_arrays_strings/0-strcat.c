#include "main.h"

/**
 * _strcat- function that concatenates two strings
 * @dest:  pointer to destination string
 * @src:   pointer to source string
 * Return: returns dest
 */

char *_strcat(char *dest, char *src)
{
int i, j;

i = 0;
while (dest[i] != '\0')
{
i++;
}
j = 0;
while (src[j] != '\0')
{
dest[i + j] = src[j];
j++;
}

return (dest);
}

