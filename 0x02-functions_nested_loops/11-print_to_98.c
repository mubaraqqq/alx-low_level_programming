#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print from n to 98
 * @y: parameter
*/

void print_to_98(int y)
{
int n;

if (y > 98)
{
for (n = y; n > 97; n--)
{
printf("%d", n);
if (n != 98)
{
putchar(',');
putchar(' ');
}
}
}

else
{
for (n = y; n < 99; n++)
{
printf("%d", n);
if (n != 98)
{
putchar(',');
putchar(' ');
}
}
}

putchar('\n');
}
