#include <stdio.h>

/**
 * main - prints hexadecimals numbers
 * Description - main value
 * followed by new line
 * Return: Always 0 (success)
*/

int main(void)
{

int n;
for ( n = 48; n < 58; n++)
{
putchar(n);
}
char letter;
for (letter = 97 ; letter <= 102; letter++)
    {
        putchar(letter);
    }
putchar('\n');
return (0);
}

