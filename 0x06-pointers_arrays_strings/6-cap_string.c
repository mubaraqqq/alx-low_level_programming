#include "main.h"

/**
 * cap_string - capitalize eevry word in a string
 * @str: string argument
 * Return: pointer to string
*/

char *cap_string(char *str)
{
char *result = str;

while (*str != '\0')
{
while (*str == ' ' || *str == '\t' || *str == '.' || *str == '\n' || *str == ',' || *str == ';' || *str == '!' || *str == '?' || *str == '"' || *str == '(' || *str == ')' || *str == '{' || *str == '}')
{
str++;
if ('a' <= *str && *str <= 'z')
*str = *str - 'a' + 'A';
}

str++;
}

return (result);
}
