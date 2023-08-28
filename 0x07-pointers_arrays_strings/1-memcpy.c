#include "main.h"

/**
 * _memcpy - copy n bytes from dest to src
 * @dest: destination string
 * @src: source string
 * Return: return pointer to string
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i <= n; i++)
{
*dest = *src;
dest++;
src++;
}

return (dest);
}
