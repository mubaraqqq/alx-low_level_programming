#include "main.h"

/**
 * _isdigit - check if a character is digit
 * @c: character parameter to check for
 * Return: 1 if digit, 0 otherwise
*/

int _isdigit(int c)
{
if (0 <= c && c <= 9 || '0' <= c && c <= '9')
return (1);
else
return(0);
}
