#include "main.h"
#include "ctype.h"

/**
 * _islower - checks lowercase
 * @param c - integer parameter
 * Return: 1 if true and 0 ptherwise
*/

int _islower(int c)
{
if (c == tolower(c))
return (1);
else
return (0);
}
