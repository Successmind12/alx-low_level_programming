#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 * @s: integer to be returned
 * Return: length of the string
 */

int _strlen(char *s)
{
int length = 0;

while (s[length] != '\0')
length++;

return (length);
}


