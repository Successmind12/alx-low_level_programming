#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - prints different comboinations of two digits
 * Description - main value
 * followed by new line
 * Return: Always 0 (success)
*/
int main(void)
{
int a = '0';
int i;
for(i = 1; i < 100; i++)
{
    int v = ',';
    int d = ' ';
    int f = (i/10)+'0';
    int g = (i%10)+'0';
   
    if((g < f) || (g == f))
    continue;
        {
            putchar(f);
            putchar(g);
    
                if(i != 89)
                    {
                        putchar(v);
                        putchar(d);
        
                    }
        }
}
return (0);
}
