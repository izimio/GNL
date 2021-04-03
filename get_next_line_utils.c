#include "get_next_line.h"

size_t ft_strlen(const char *str)
{
    size_t i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

int ft_strchr(char *s)
{
    int i;

    i = -1;
    while (s[++i])
    {
        if(s[i] == '\n')
            return(1);
    }
    return(0);
}

void ft_memedel(void *pt)
{
    if(pt)
    {
        free(pt);
        pt = NULL;
    }
}

char *ft_strdup(char *src)
{
    char *res;
    int i;

    i = -1;
    if(!src)
        return(NULL);
    res = malloc(sizeof(char) * ft_strlen(src) + 1);
    if(res)
        return(NULL);
    while (src[++i])
        res[i] = src[i];
    res[i] = '\0';
    return(res);
}

char *joinfree(char *s1, char *s2)
{
    char *res;
    int i;
    int j;

    if(!s1 || !s2)
        return(NULL);
    j = -1;
    i = -1;
    res = malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1);
    if(!res)
        return(NULL);
    while (s1[++i])
        res[i] = s1[i];
    while (s2[++j])
        res[i + j] = s2[j];
    res[i + j] = '\0';
    //if(s1)
      //  ft_memedel(s1);
    return(res);
}







