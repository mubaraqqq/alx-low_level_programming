#include "main.h"

/**
 * main - using putchar to print
 *
 * Return: return integer 0  
*/

int main (void)
{
char str[] = "_printchar";
for (int i = 0; i < 10; i ++)
{
_putchar(str[i]);
}
_putchar('\n');
return (0);
}