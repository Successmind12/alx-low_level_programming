#include "main.h"

/**
 * _strcat- function that concatenates two strings
 * @dest: destination string
 * @src:  source string
 * Return: concatnation of two strings
 */

char *_strcat(char *dest, char *src);
{
int i, j;

for (i = 0; dest[i] != '\0'; i++)
{

}
for (j = 0; src[j] != '\0'; j++)
{
dest[i] = src[j];
}

dest[i] = '\0';
return (dest);
}


