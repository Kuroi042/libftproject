
#include "libft.h"

char *ft_strdup(const char *s1)
{
    char *str;

    str = ft_calloc(ft_strlen((char *)s1) + 1 , sizeof(char));
    if(!str)
    {
        return (NULL);
    }
    ft_memmove(str, s1, ft_strlen((char *)s1) + 1);
    return (str);
}
