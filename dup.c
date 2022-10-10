#include <string.h>
#include "libft.h"
char *ft_strdup(  char *str)
{
    char *alloc;
    int i;
    i =0;
    alloc = (char*)malloc(sizeof(char)*ft_strlen(str)+1);    //alloc = malloc(count * size);
    if(!alloc)
        return NULL;
    while(*str)
    {
        alloc[i++]= *str++;
        alloc[i] ='\0';
        return(alloc);
    }
    
}

