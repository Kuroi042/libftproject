#include <stdio.h>
#include "libft.h"
char *ft_strjoin(char const *first, char const *last)
{
    char *s1 = (char*)first;
    char *s2 = (char*)last;
    int i;
    i = 0;
    char *p;

    if (!s1 || !s2)
        return NULL;

    p = (char*)ft_calloc(((ft_strlen(s1)+ft_strlen(s2)) + 1), sizeof(char)); 
    if (p == NULL)
        return NULL;
    while (i < ft_strlen(s1))
    {
      p[i] = s1[i];
        i++; 
    }
    i = 0;
    while (i <= ft_strlen(s2))
    {
        p[i + ft_strlen(s1)] = s2[i];
        i++;
    }

    return p;

}
// int main()
// {
//     char s1[] = "charaf";
//     char s2[] = "mbouder";
//     printf("%s",ft_strjoin(s1,s2));
// }