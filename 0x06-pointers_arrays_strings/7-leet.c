#include "main.h"

/**
 * leet - encode string using 1337
 * @s: string to encode
 * Return: pointer to string
*/

char *leet(char *s)
{
char *str = s;

while (*s != '\0')
{
if (*s == 'a' || *s == 'A')
*s = '4';
else if (*s == 'e' || *s == 'E')
*s = '3';
else if (*s == 'o' || *s == 'O')
*s = '0';
else if (*s == 't' || *s == 'T')
*s = '7';
else if (*s == 'l' || *s == 'L')
*s = '1';
s++;
}
*s = '\0';
return (str);
}
