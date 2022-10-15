#include "libft.h"
char *ft_substr(char const *s, unsigned int start , size_t len)
{
    char *str = (char*)s;
    char *p;
    size_t  i = 0;
    int star =(int)start;
    if(!s)
        return 0;
    
    p = (char*)malloc(sizeof(char)*(len+1));
    if (!p)
        return NULL;
    if (star >= ft_strlen(str))
    {
       // p[0] = '\0';
        return p;
    }
        
    while(i <len)
    {   
        p[i]= str[start];
        i++;
        start++;

    }                
        p[i] = '\0';
    return p;                
}