#include "stdio.h"

/**
 * main - the main function
 * Return: void
 */

int main(void)
{
char s[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
int i = 0;
while (s[i] != '\n' && s[i] != '\0')
{
putchar(s[i]);
i++;
}
return (1);
}
