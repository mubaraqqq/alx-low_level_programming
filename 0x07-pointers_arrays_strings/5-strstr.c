#include "main.h"
#include <stdio.h>

/**
 * _strstr - function that return sfirst occurence of substring
 * @haystack: str parameter to seacrh through
 * @needle: str parameter to match
 * Return: pointer to beginning of matced substring or NULL
*/

char *_strstr(char *haystack, char *needle)
{
int i, j;

i = 0;
while (haystack[i] != '\0')
{
j = 0;
while (needle[j] != '\0' && haystack[i + j] == needle[j])
j++;

if (needle[j] == '\0')
return (haystack + i);

i++;
}

return (NULL);
}
