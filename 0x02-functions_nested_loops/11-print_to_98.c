#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print from n to 98 
 * @y: parameter
*/

void main(int y)
{
int n;
for (n = y; n < 99; n++)
{
printf("%d", n);
if (n != 98)
{
putchar(',');
putchar(' ');}
}
putchar('\n');
}
