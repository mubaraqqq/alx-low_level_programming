#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concat n chars of s2 onto s1
 * @s1: cchar s1
 * @s2: char s2
 * @n: number of chars to concat
 * Return: pointer to string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ptr;
int i;
int s1_len = 0;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

while (s1[s1_len] != '\0')
s1_len++;

ptr = malloc(s1_len + n + 1);
if (ptr == NULL)
return (NULL);

for (i = 0; i < s1_len; i++)
ptr[i] = s1[i];

for (i = 0; i < n; i++)
ptr[s1_len + i] = s2[i];


ptr[s1_len + i] = '\0';

return (ptr);
}
