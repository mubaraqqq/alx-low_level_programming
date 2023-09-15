#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - print numbers
 * @separator: separator string
 * @n: number of arguments
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
int i;
int *args = (int *)&n;

for (i = 0; i < n; i++)
{
printf("%d", args[i + 1]);
if (i != n - 1 && separator != NULL)
printf("%s", separator);
}
printf("\n");
}

