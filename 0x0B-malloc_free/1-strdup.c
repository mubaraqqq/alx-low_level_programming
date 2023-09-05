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

  // Allocate memory for the new string

  // Copy the string to the new memory, one character at a time
for (int i = 0; i < end - str; i++)
new_str[i] = str[i];

  // Terminate the new string with a null character
new_str[end - str] = '\0';

  // Return the pointer to the new string
free(new_str);
return (new_str);
}
