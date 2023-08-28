#include "main.h"

/**
 * print_diagsums - print sums of diagonal
 * @a: integer parameter
 * @size: size parameter
*/

void print_diagsums(int *a, int size)
{
int i, diag1_sum = 0, diag2_sum = 0;

for (i = 0; i < size; i++)
{
diag1_sum += a[i * size + i];
diag2_sum += a[i * size + (size - i - 1)];
}

printf("%d, %d\n", diag1_sum, diag2_sum);
}
