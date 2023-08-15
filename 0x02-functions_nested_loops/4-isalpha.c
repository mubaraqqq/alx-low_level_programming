#include "main.h"

/**
 * _isalpha - checks for letter
 * @c: integer parameter
 * Return: 1 if true and 0 ptherwise
*/

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
