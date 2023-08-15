#include "main.h"

/**
 * _islower - checks lowercase
 * @c - integer parameter
 * Return: 1 if true and 0 ptherwise
*/

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
