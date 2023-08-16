#include "main.h"

/**
 * times_table - print 9 times table
*/

void times_table(void)
{
int operand_one;
int operand_2;
int multiple;

for (operand_one = 0; operand_one < 10; operand_one++)
{
for (operand_2 = 0; operand_2 < 10; operand_2++)
{
multiple = operand_one * operand_2;
if (multiple <= 9)
{
if (operand_2 != 0)
{
_putchar(' ');
_putchar(' ');
}
_putchar(multiple + '0');
}
else if (multiple > 9)
{
_putchar(' ');
_putchar((multiple / 10) + '0');
_putchar((multiple % 10) + '0');
}
if (operand_2 != 9)
{
_putchar(',');
}
}
_putchar('\n');
}
}
