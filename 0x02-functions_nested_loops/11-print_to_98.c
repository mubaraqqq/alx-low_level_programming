#include "main.h"

/**
 * print_to_98 - print from n to 98 
 * @y: parameter
*/

void print_to_98(int y)
{
int n;
for (n = y; n < 99; n++)
{
if (n != 0)
{
_putchar(' ');
}
if (n <= 9)
{
_putchar(n + '0');
}
else if (n > 9)
{
_putchar(' ');
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
}
}
_putchar('\n');
}
