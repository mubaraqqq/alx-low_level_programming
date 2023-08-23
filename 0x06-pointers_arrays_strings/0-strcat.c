#include "main.h"

/**
 * _strcat - append src string to dest string
 * @dest: dest string parameter
 * @src: src string parameter
 * Return: returns a pointer to a character
*/

char *_strcat(char *dest, char *src)
{
while (*dest != '\0')
dest++;

while(*src != '\0')
{
*dest = *src;
dest++;
src++;
}

*dest = '\0';

return (*dest);
}
