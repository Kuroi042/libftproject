#include "libft.h"
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t i;
    i = 0;
    if(s==0)
        return NULL;
 
    unsigned int len = ft_strlen(s);
   char *str = (char*)malloc(len+1); 
   if(!str)
        return NULL;
   while(s[i])
   {

       str[i] = f(i, s[i]);
       i++;
   }
   str[i] = '\0';
return str;
}
