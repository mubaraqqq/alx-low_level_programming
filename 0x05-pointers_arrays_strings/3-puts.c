#include "main.h"
#include "_putchar.c"

/**
 * _puts - print string followed by new line
 * @str: char parameter
*/

void _puts(char *str)
{
int i = 0;

while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}