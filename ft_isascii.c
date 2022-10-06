
int ft_isascii(int i)
{
    if(i >= 0 && i <=127)
    {
        return 1;
    }
    else
     return 0;
}
// #include <stdio.h>
// int main()
// {
//     int c = 1;
//     printf("%d", isascii(c));
// }