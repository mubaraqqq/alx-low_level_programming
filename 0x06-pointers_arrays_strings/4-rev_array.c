#include "main.h"

/**
 * reverse_array - reverse an array in place
 * @a: array input
 * @n: number of elements in array
*/

void reverse_array(int *a, int n)
{
int left = 0;
int right = n - 1;
int temp;


while (left < right)
{
temp = a[left];
a[left] = a[right];
a[right] = temp;
left++;
right--;
}

}
