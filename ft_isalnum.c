
int ft_isalnum (int c)
{
    if ((c >= 48 && c <= 57)||(c >= 'A' && c<= 'Z' ) || (c >= 'a' && c <= 'z'))
    {
        return 1;
    }
    else 
    return 0;

}
// #include <stdio.h>
// int main()
// {
//    char t = '1';
//     isalnum(t);
//     printf("%d", isalnum(t));
// }