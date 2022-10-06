#include <string.h>
void *ft_memset(void *s, int c, size_t len)
{
    size_t i =0; // initialize I ;
    char *b = (void*)s;  // type cast  pointer *s to char pointer s[];
   while( i<len)  // while loop to iterate over s[];
   {
       b[i] = (unsigned char )c; // writes len bytes of value c typecasting c to unsignchar
       i++; //increment i;
   }
   return b;  

}
// #include <stdio.h>
// int main()
// {
// char str[20]= "charaf bouderr";
// printf("%s",ft_memset(str,'s',2));

// }