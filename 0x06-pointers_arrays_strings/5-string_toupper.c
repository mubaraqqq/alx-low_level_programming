#include "main.h"

/**
 * string_toupper - convert all lowercase to uppercase
 * @str: string pointer
 * Return: pointer to string
*/

char *string_toupper(char *str)
{
char *str2 = str;

while (*str != '\0')
{
if ('a' <= *str && *str <= 'z')
*str = *str - 'a' + 'A';

str++;
}

return (str2);
}


int main(void)
{
    char str[] = "Look up!\n";
    char *ptr;

    ptr = string_toupper(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}