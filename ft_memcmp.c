#include <string.h>
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
      unsigned char *a = (unsigned char*)s1;
      unsigned char *b = ( unsigned char*)s2;
    int i =0;
 
    
       while(i<n)
       {
           if(a[i]!= b[i])
           {
                return  a[i] - b[i] ;
           }
           i++;
       } 
        return 0;
    
}
// #include <stdio.h>
// int main()
// {
//     char a[] = "atoms\0\0\0\0";
//   char b[] = "atoms\0abc";
// printf("%d", ft_memcmp(a,b,13));
// }