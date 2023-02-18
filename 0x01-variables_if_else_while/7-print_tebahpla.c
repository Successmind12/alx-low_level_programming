#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - prints lowercase alphabets in reverse,
 * Description - main value
 * followed by new line
 * Return: Always 0 (success)
*/

int main(void)
{
char letter;
for (letter = 122; letter >= 97; letter--)
{
putchar(letter);
}
putchar('\n');
return (0);
}
