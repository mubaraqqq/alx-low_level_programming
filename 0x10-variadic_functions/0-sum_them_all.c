#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum all arguments of a function
 * @n: first number
 * Return: the sum, integer
 */

int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
int *args = (int *)&n;
unsigned int i;

for (i = 0; i < n; i++)
sum += args[i + 1];

return (sum);
}
