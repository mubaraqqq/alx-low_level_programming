#include "main.h"
#include "_putchar.c"

/**
 * _memset - set a memory location with a single byte
 * @s: char location/pointer
 * @b: single char byte
 * @n: integer representing number of times to set byte
 * Return: pointer to character
*/

char *_memset(char *s, char b, unsigned int n)
{
char *ptr = s;
int i;

for (i = 0; i < n; i++)
{
*s = b;
s++;
}


return (ptr);
}
