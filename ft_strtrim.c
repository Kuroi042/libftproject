
#include <stdio.h>

#include "libft.h"

char *ft_strtrim(char const *s1 , char const *set)
{
    char *res;
    int i ;
    if(!s1 || !set)
        return NULL ;
    while (ft_strchr(set , *(char*)s1) && *s1)
        s1++;
    i = ft_strlen(s1);
    while (ft_strchr(set , s1[i-1])&& i)
        i--;
    res = ft_substr(s1,0,i);
        return res;

        
    }
    
    