#include "main.h"
#include <stdlib.h>

/**
 * strtow - string to words
 * @str: string pointer
 * Return: pointer to poi
*/

char **strtow(char *str)
{
int i, j, k = 0, len = 0;
char **words;

if (str == NULL || str[0] == '\0')
return (NULL);

for (i = 0; str[i]; i++)
if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
len++;

words = malloc(sizeof(char *) * (len + 1));
if (words == NULL)
return (NULL);

for (i = 0; i < len; i++)
{
while (*str == ' ')
str++;
for (j = 0; str[j] && str[j] != ' '; j++)
;
words[i] = malloc(sizeof(char) * (j + 1));
if (words[i] == NULL)
return (NULL);
for (k = 0; k < j; k++)
words[i][k] = str[k];
words[i][k] = '\0';
str += j;
}
words[len] = NULL;

return (words);
}
