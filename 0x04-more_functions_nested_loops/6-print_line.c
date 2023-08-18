#include "main.h"

/**
 * print_line - print _ a given number of times
 * @n: parameter indicating number of times line should be printed
*/

void print_line(int n)
{
int count;

if (n >= 0)
{
for (count = 0; count < n; count++)
{
_putchar('_');
}
}
_putchar('\n');
}
