#include "main.h"

/**
 *_strncpy - program that concantenates two strings
 *@dest: string destination
 *@src: string source
 *@n: number of bytes
 *Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for (; n > i; i++)
{
dest[i] = '\0';
}

return (dest);
}
