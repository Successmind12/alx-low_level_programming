#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the alphabet in lowercase,
 * Description - main value
 * followed by new line
 * Return: Always 0 (success)
*/

int main(void)
{
int i;
for (i = 97 ; i <= 123 ; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
