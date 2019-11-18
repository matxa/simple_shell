#ifndef SIMPLESHELL_H
#define SIMPLESHELL_H
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>

int n_strlen(char *str);
char *n_strtoke(char *str, const char *delim);
char *_strcpy(char *dest, char *src);
char *user_input(void);

#endif
