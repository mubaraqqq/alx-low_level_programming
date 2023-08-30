#include "main.h"

/**
 * _strlen_recursion - rturn the length of a string by recursion
 * @s: string parameter
 * Return: integer length
*/

int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}
