#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - print diagonal using ineteger input
 * @n: number of diagonals
*/

void print_diagonal(int n)
{
int count;
int line_count;

if (n > 0)
{
for (count = 0; count <= n; count++)
{
for (line_count = 0; line_count <= count; line_count++)
{
putchar(' ');
}
putchar('\\');
putchar('\n');
}
}

}
