#include "main.h"

/**
 * _isuper - check if a character is in upper case
 * @c: character parameter to check for
 * Return: 1 if uppercase, 0 otherwise
*/

int _isuper(int c)
{
if ('A' <= c <= 'Z')
return (1);
else
return(0);
}
