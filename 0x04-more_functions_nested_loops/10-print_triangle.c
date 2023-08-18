#include "main.h"

/**
 * print_triangle - print triangle using size parameter
 * @size: size parameter that determines nlength of sides of triangle
*/

void print_triangle(int size)
{
int count;
int space_count;
int hash_count;

if (size > 0)
{
for (count = 1; count <= size; count++)
{
for (space_count = size - count; space_count > 0; space_count--)
{
_putchar(' ');
}
for (hash_count = 1; hash_count <= count; hash_count++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}

}
