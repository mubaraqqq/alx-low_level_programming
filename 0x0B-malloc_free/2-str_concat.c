#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concat strings
 * @s1: param1
 * @s2: param2
 * Return: pointer to char
*/

char *str_concat(char *s1, char *s2)
{
char *end1 = s1;
char *end2 = s2;
char *new_str;
int i;

if (s1 == NULL || s2 == NULL)
return (NULL);

while (*end1 != '\0')
end1++;
  
while (*end2 != '\0')
end2++;


new_str = (char *)malloc(end1 - s1 + end2 - s2 + 1);

if (new_str == NULL)
return (NULL);

for (i = 0; i < end1 - s1; i++)
new_str[i] = s1[i];

for (i = 0; i < end2 - s2; i++)
new_str[end1 - s1 + i] = s2[i];

new_str[end1 - s1 + end2 - s2] = '\0';

return (new_str);
}
