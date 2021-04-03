#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>

size_t ft_strlen(const char *str);
char *ft_strdup(char *src);
void ft_memedel(void *pt);
int ft_strchr(char *s);
char *joinfree(char *s1, char *s2);
#endif