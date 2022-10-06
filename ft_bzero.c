#include <string.h>

void ft_bzero(void *s , size_t n )
{
    size_t i = 0;
    char *b = (char *)s;

    while(i < n)        
    {
            b[i] = '\0';      
            i++;  
    }    
}

// #include <stdio.h>
// int main()
// {
//     char s[4] = "0111";
//     int i;

//     ft_bzero(s,1);
//     i = 0;
//     while (i < 4)
//         printf("%d", s[i++]);
  
// }