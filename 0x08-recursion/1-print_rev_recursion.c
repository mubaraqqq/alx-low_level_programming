#include "main.h"
#include "_putchar.c"

/**
 * _print_rev_recursion - print a string in revese recursively
 * @s: string parameter to print
*/

void _print_rev_recursion(char *s)
{
if (*s == '\0')
return;

_print_rev_recursion(s + 1);
if (*s == '\n')
_putchar('\n');
else
_putchar(*s);

}
