#include "main.h"

/**
 *_strncat - program that concantenates two strings
 *@dest: string destination
 *@src: string source
 *@n: number of bytes
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
int i, j;

for (i = 0; dest[i] != '\0'; i++)
for (j = 0; src[j] != '\0' && n > 0; i++, n-- j++)
{
dest[i] = src[j];
}

return (dest);
}
