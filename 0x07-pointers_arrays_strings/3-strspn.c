#include "main.h"

/**
 * _strspn - get the length of a prefix of a string
 * @s: string parameter
 * @accept: string to check for
 * Return: Integer of prefix length
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j;

i = 0;
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] != accept[j])
break;
i++;
}

return (i);

}
