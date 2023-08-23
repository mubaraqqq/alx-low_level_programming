#include "main.h"

/**
 * _strncat - concat strings 
 * @dest: dest string parameter
 * @src: src string parameter
 * @n: Integer number of bytes to concatenate
 * Return: returns a pointer to a character
*/

char *_strncat(char *dest, char *src, int n)
{
char *str = dest;

while (*dest != '\0')
dest++;

while (*src != '\0' && n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}

return (str);

}
