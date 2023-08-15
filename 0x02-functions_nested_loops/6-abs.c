#include "main.h"

/**
 * _abs - absolute integer
 * @n: integer parameter
 * Return: 1 if true and 0 ptherwise
*/

int _abs(int n)
{
if (n < 0)
return (n - (2 * n));
else
return (n);
}
