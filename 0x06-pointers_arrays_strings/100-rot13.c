#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @s: The string to be  encoded
 * Return: The string
 */

char *rot13(char *s)
{
int a, b;
char r[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char boolean;

for (a = 0; s[a] != '\0'; a++)
{
boolean = 0;
for (b = 0; alpha[b] != '\0' && boolean == 0; b++)
{
if (s[a] == alpha[b])
{
s[a] = r[b];
boolean = 1;
}
}
}

return (s);
}


