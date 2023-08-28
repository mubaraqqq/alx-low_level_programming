#include "main.h"

/**
 * _strspn - get the length of a prefix of a string
 * @s: string parameter
 * @accept: string to check for
 * Return: Integer of prefix length
*/

unsigned int _strspn(char *s, char *accept)
{
int found;
int j;
unsigned int count;

count = 0;

while (*s != '\0')
{

found = 0;
while (accept[j] != '\0')
{
if (*s == accept[j])
found = 1;

j++;
}

j = 0;
if (found == 1)
count++;
else
break;

s++;
}

return (count);

}
