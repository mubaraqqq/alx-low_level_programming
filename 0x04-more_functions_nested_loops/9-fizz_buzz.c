#include "main.h"

/**
 * fizz_buzz - print fizz buzz
*/

void main(void)
{
int n;

for (n = 1; n < 101; n++)
{
if (n % 3 == 0 && n % 5 != 0)
{
_putchar("Fizz");
_putchar(" ");
}
else if (n % 5 == 0 && n % 3 != 0)
{
_putchar("Buzz");
_putchar(" ");
}
else if (n % 3 == 0 && n % 5 == 0)
{
_putchar("FizzBuzz");
_putchar(" ");
}
else
{
if (n > 9)
_putchar((n / 10) + '0');

_putchar((n % 10) + '0');
_putchar(" ");
}
}
_putchar("\n");
}
