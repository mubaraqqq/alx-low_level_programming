#include "main.h"

/**
 * _pow_recursion - return the power of a number to another number
 * @x: integer parameter
 * @y: integer parameter, power
 * Return: power of x to y
*/

int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
