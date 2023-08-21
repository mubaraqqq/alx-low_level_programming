#include "main.h"

/**
 * rev_string - reverse string
 * @s: char parameter
*/

void rev_string(char *s)
{
int i = 0;
char *t;

while (s[i] != '\0')
i++;

while (i >= 0)
{
*t = s[i];
t++;
i--;
}

*s = *t;
}
