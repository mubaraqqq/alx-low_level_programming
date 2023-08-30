#include "main.h"

/**
 * _sqrt_recursion - return square root a number
 * @n: integer parameter
 * Return: integer square root
*/

int _sqrt_recursion(int n)
{
int mid, next;

if (n < 0)
return (-1);
else if (n == 0 || n == 1)
return (n);
else
{
mid = n / 2;
next = _sqrt_recursion(mid);
if ((next * next) == n)
return (next);
else
return (_sqrt_recursion(mid + 1));
}
}
