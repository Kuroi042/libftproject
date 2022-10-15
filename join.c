#include <stdio.h>
#include "libft.h"
#include <strings.h>
char *ft_strjoin(char const *first, char const *last)
{
    char *s1 = (char*)first;
    char *s2 = (char*)last;
    size_t i;
    i = 0;
    char *p;

    if (!s1 || !s2)
        return NULL;
    int len_s1 = ft_strlen(s1);
    int len_s2 = ft_strlen(s2);

    p = (char*)malloc(sizeof(char) * ((len_s1+len_s2) + 1)); //
    if (p == NULL)
        return NULL;
    while (i < len_s1)
    {
        p[i] = s1[i];
        i++;
    }
    i = 0;
    while (i <= len_s2)
    {
        p[i + len_s1] = s2[i];
        i++;
    }
    p[i + (len_s1 + 1)] = '\0';
    return p;

}