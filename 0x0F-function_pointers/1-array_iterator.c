#include "function_pointers.h"

/**
 * array_iterator - iterates through array and call fn
 * @array: array to loop through
 * @size: size of array
 * @action: function to call
*/


void array_iterator(int *array, int size, void (*action)(int))
{
int i;

for (i = 0; i < size; i++)
{
action(array[i]);
}
}
