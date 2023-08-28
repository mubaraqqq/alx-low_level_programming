#include "main.h"

/**
 * _strpbrk - seacrh string and return pointer to first occurence
 * @s: string parameter to seacrh through
 * @accept: string parameter to search for
 * Return: pointer to string
*/

char *_strpbrk(char *s, char *accept)
{
int j;

while (*s != '\0')
{

j = 0;
while (accept[j] != '\0')
{
if (*s == accept[j])
return (s);

j++;
}

s++;
}

return (NULL);

}
