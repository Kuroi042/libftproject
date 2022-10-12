#include "libft.h"
#include <string.h>

size_t ft_strlcat(char *dst, const  char *src, size_t size)
{
    size_t i = 0;
    size_t src_len = ft_strlen(src);
    size_t dst_len = ft_strlen(dst);
 
    if(size ==0)
        return(0);
    if(size >dst_len)  
{
	while (src[i] !=  '\0' && dst_len + i < size - 1) 
	{
	    dst[dst_len + i] = src[i]; // append string src to the end of dst
		i++;
       // return src_len+dst_len;
	}
    dst[dst_len + i] = '\0';  // null terminate dst '\0'
    return dst_len;
}

}