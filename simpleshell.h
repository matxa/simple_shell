#ifndef SIMPLESHELL_H
#define SIMPLESHELL_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/wait.h>
/* environ declearation */

int n_strlen(char *str);
char *n_strtoke(char *str, const char *delim);
char *_strcpy(char *dest, char *src);
char *user_input(void);
ssize_t _getline(char **buff);
void *_realloc(void *ptr, size_t old_size, size_t new_size);
char **tokens(char *buffer);
int my_cd(char **args);
int run(char **args);
int my_exit(int n);
char *_getenv(char *var_name);
char *_strcat(char *dest, char *src);
int _strlen(char *s);
int _strcmp(char *s1, char *s2);
char *str_concat(char *s1, char *s2);

#endif
