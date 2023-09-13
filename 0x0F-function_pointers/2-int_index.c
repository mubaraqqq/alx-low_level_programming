#include "function_pointers.h"

/**
 * int_index - return index of element
 * @array: array to check
 * @size: size of array
 * @cmp: compare fn
 * Return: position of element
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (size <= 0)
return (-1);

for (i = 0; i < size; i++)
{
if (cpm(array[i]) != 0)
return (i);
}

return (-1);
}
