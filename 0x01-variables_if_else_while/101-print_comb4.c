#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - prints different comboinations of three digits
 * Description - main value
 * followed by new line
 * Return: Always 0 (success)
*/
int main(void)
{

int i, j, k;
for (i = 0; i <= 9; i++) 
{
for (j = 0; j <= 9; j++)
{
for (k = 0; k <= 9; k++) 
{
int g = ',';
if (i > j || i > k || j > k)
continue;
if (i == 0 && j == 0 && k == 0)
continue; 
if (i == j || i == k || j == k)
continue;
putchar(i + '0');
putchar(j + '0');
putchar(k + '0');
putchar(g);
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
