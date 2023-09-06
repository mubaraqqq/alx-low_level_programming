#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
char *argstostr(int ac, char **av);
char **strtow(char *str);

#endif /* MAIN_H */