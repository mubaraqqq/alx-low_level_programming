#include "main.h"

/**
 * infinite_add - add numbers from strings
 * @n1: first string number
 * @n2: second string number
 * @r: buffer string
 * @size_r: size of buffer string
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int carry = 0;
int i = 0;
int j = 0;
int k = size_r - 1;

int digit1;
int digit2;
int sum;

while (*n1)
i++;

while (*n2)
j++;

while (i >= 0 || j >= 0)
{
if (i >= 0)
digit1 = n1[i] - '0';
else
digit1 = 0;

if (j >= 0)
digit2 = n2[j] - '0';
else
digit2 = 0;

sum = digit1 + digit2 + carry;

if (sum >= 10)
{
carry = 1;
sum -= 10;
}
else
carry = 0;

r[k] = sum + '0';
k -= 1;
i -= 1;
j -= 1;
}

if (carry)
{
r[k] = '1';
k -= 1;
}

if (k < 0)
return (0);
else
return (r + k + 1);
}
