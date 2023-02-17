#include <stdio.h>

/**
 * main - prints single digit
 * Description - main value
 * followed by new line
 * Return: Always 0 (success)
*/

int main(void)
{
int i = '0';
for(int i = 0; i <= 9; i++)
{
    putchar('0' + i);
}
putchar('\n');

return (0);
}
