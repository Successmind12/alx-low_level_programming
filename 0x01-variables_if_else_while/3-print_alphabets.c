#include <stdio.h>

/**
 * main - prints the alphabet in lowercase and uppercase,
 * Description - main value
 * followed by new line
 * Return: Always 0 (success)
*/

int main(void)
{
int letter;
int ch;
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
for (ch = 'A'; ch <= 'Z'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
