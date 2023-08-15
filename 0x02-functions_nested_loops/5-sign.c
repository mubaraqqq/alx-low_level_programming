#include "main.h"

/**
 * print_sign - checks for integer sign
 * @n: integer parameter
 * Return: 1 if true and 0 ptherwise
*/

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar(0);
return (0);
}
else
{
_putchar('-');
return (-1);
}

}
