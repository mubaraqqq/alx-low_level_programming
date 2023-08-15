#include "main.h"

/**
 * main - using putchar to print
 *
 * Return: return integer 0
*/

int main(void)
{
char str[] = "_putchar";
int i;
for (i = 0; i < 8; i++)
{
_putchar(str[i]);
}
_putchar('\n');
return (0);
}
