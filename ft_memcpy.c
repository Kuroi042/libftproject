#include <string.h>
void *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t i = 0;


    char *s=(char*)src;
    char *d=(char*)dst;
    if(dst == NULL && src == NULL)
        return (NULL);

    while (i < n)
    {
        d[i] = s[i];
        i++;
    } 
    return dst;
}

// #include <stdio.h>
// int main()
// {
//     char source[10]= "abcefgh";
  
//     printf("%s\n", ft_memcpy(source + 2,source,0));
//     char source2[10]= "abcefgh";
//     printf("original %s\n", memcpy(source2 + 2,,0));
// }
