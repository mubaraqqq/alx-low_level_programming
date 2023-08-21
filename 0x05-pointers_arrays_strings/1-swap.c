#include "main.h"

/**
 * swap_int - swap interger values
 * @a: pointer parameter 1
 * @b: pointer parameter 2
*/

void swap_int(int *a, int *b)
{
int *temp = b;
*a = *b;
*b = *temp;
}
