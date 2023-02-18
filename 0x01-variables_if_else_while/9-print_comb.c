#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - prints different comboinations of single numbers
 * Description - main value
 * followed by new line
 * Return: Always 0 (success)
*/
int main(void)
{

int a = '0';
char x = ',';
char b = ' ';
for (a = 0 ; a <= 9; a++)
    {   
        putchar('0' + a);
        if(a != 9)
        {   
            putchar( x );
            putchar(b);
        }
    }
putchar('\n');

return (0);
}
