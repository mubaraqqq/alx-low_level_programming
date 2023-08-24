#include "main.h"

/**
 * print_number - print number using putchar
 * @n: integer argument
*/

void print_number(int n)
{
if (n == 0)
{
_putchar('0');
return;
}

print_number(n / 10);
_putchar(n % 10 + '0');
}
