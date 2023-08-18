#include "main.h"

/**
 * print_square - print diagonal using ineteger input
 * @size: number of diagonals
*/

void print_square(int size)
{
int count_1;
int count_2;

if (size > 0)
{
for (count_1 = 0; count_1 < size; count_1++)
{
for (count_2 = 0; count_2 < size; count_2++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
_putchar('\n');

}
