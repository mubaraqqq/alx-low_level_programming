#include "main.h"

/**
 * _print_rev - print reverse string followed by new line
 * @s: char parameter
*/

void print_rev(char *s)
{
int i = 0;

while (s[i] != '\0')
i++;

while (i > 0)
{
_putchar(s[i]);
i--;
}
_putchar('\n');
}
