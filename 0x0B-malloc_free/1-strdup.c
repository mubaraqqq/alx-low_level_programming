#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copy string and return pointer
 * @str: str param
 * Return: pointer
*/

char *_strdup(char *str)
{
char *end = str;
char *new_str;

if (str == NULL)
return (NULL);

while (*end != '\0')
end++;

new_str = (char *)malloc(end - str + 1);

for (int i = 0; i < end - str; i++)
new_str[i] = str[i];

new_str[end - str] = '\0';

free(new_str);
return (new_str);
}
