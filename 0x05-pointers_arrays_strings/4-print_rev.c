#include "main.h"
#include "_putchar.c"

/**
 * _print_rev - print reverse string followed by new line
 * @s: char parameter
*/

void _puts(char *s)
{
int i = 0;

while (s[i] != '\0')
i++;

while (i >= 0)
{
_putchar(s[i]);
i--;
}
_putchar('\n');
}
