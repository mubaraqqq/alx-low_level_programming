#include "main.h"

/**
 * _strncpy - copy strings 
 * @dest: dest string parameter
 * @src: src string parameter
 * @n: Integer number of bytes to concatenate
 * Return: returns a pointer to a character
*/

char *_strncpy(char *dest, char *src, int n)
{
char *str = dest;

while (*src != '\0' && n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}

*dest = '\0';

return (str);

}
