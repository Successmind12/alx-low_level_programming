#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @str: The string to be capitalized
 * Return: The string
 */

char *cap_string(char *str)
{
int i, j;
int MyWord;
char separators[] = ",;.!?(){}\n\t\" ";

for (i = 0, MyWord = 0; str[i] != '\0'; i++)
{
if (str[0] >= 'a' && str[0] <= 'z')
MyWord = 1;
for (j = 0; separators[j] != '\0'; j++)
{
if (separators[j] == str[i])
MyWord = 1;
}
if (MyWord)
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] -= ('a' - 'A');
MyWord = 0;
}
else if (str[i] >= 'A' && str[i] <= 'Z')
MyWord = 0;
else if (str[i] >= '0' && str[i] <= '9')
MyWord = 0;
}
}

return (str);
}

