#include "main.h"

/**
 * _strchr - function to locate character in string
 * @s: string to search
 * @c: character to search for
 * Return: pointer to character
*/

char *_strchr(char *s, char c)
{

while (*s != '\0')
{
if (*s == c)
return (s);
s++;
}

return (NULL);

}
