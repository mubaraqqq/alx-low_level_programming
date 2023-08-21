#include "main.h"

/**
 * _strcpy - copy string
 * @dest: destination string
 * @src: source string
 * Return: pointer to string
*/

char *_strcpy(char *dest, char *src)
{
char *dest_start = dest;

while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}

*dest = '\0';

return (dest_start);
}
