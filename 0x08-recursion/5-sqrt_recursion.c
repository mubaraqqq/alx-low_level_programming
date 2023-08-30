#include "main.h"

/**
 * _sqrt_recursion - return square root a number
 * @n: integer parameter
 * Return: integer square root
*/

int _sqrt_recursion(int n)
{

if (n < 0)
return (-1);
else if (n == 0 || n == 1)
return (n);
return (_sqrt_recursion((n - 1) + (2 * n) - 1));
}
