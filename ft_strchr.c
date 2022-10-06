#include <string.h>
 #include "libft.h"
char *ft_strchr(const char *s, int c)
{
    int len;
    
    len = ft_strlen((char*) s); // to use len ;
   int i =0;
    while(i <= len)
    {
        if(s[i] == (char)c)
        {
            return (char*)(s+i); 
        }
       
        i++;    
    } 
    return NULL;
      
     
}
//#include <stdio.h>
// int main()
// {
//     char str[] = "charaf";
//     char c = 'p';
//     printf("%s",ft_strchr(str , c));

// }