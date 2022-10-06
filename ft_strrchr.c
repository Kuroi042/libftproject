#include "libft.h"

char *ft_strrchr(const char *s, int c)
{

    int len = strlen((char*)s);
    int i  =0;
    while(len >= i)
    {
    if(s[len] == (char)c)
    {
        return (char*)(s +len);
        
    }
    len --;
    }
return 0;

}
// int main()
// {
//     char str[] = "charaf";
//     char c = 'a';
//     printf("%s", strrchr(str, c));
// }