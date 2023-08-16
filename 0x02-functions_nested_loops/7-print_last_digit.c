#include "main.h"

/**
 * print_last_digit - absolute integer
 * @n: integer parameter
 * Return: 1 if true and 0 ptherwise
*/

int print_last_digit(int n)
{
int last_digit;
/* your code goes there */
if (n < 0)
n = n - (2 * n);
last_digit = n % 10;
_putchar(last_digit + '0');
return (last_digit);
}
