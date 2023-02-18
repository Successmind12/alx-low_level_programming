#include <stdio.h>

/**
 * main - prints the alphabet in lowercase except e and q
 * Description - main value
 * followed by new line
 * Return: Always 0 (success)
*/

int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if ((ch == 'q') || (ch == 'e'))
continue;
putchar(ch);
}
putchar('\n');
return (0);
}
