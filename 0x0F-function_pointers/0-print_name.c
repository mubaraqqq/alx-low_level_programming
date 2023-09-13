#include "function_pointers.h"
#include "_putchar.c"

/**
 * print_name - print name
 * @name: name pointer
 * @f: pointer to function
 */

void print_name(char *name, void (*f)(char *))
{
f(name);
}
