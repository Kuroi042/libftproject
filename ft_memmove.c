#include <stdio.h>
#include <string.h>
#include "libft.h"

void* ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i = len;
	const unsigned char *s;
	unsigned char *d;
	s = src;
	d = dst;

	if(s == NULL && d == NULL) // return Null IN CASE OF D = NULL S = NULL 
		return (d);  // RETURN d

	if(s > d)
		ft_memcpy(d, s, len); // MEMCPY;

	if(s < d) // OVELAP CASE
	{
		while (i>0) 
		{
			i--; 
			d[i] = s[i];
		}
	}
	return (d);
}


// int main()
// {
// 	char a[6] = "HELLO";
// 	char *back = ft_memmove(a+2, a, 3);
// 	printf("Value: |%s| \n", back);
// 	printf("Value: |%s| \n", a);
// 	return (0);
// }