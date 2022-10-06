/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouderr <mbouderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 16:03:01 by mbouderr          #+#    #+#             */
/*   Updated: 2022/10/06 18:42:03 by mbouderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    i =0;

    if(dstsize == 0) // no room for null terminator
        return (ft_strlen((char *)src));    
    while(src[i] != '\0' && i < dstsize-1)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';

    return (ft_strlen((char *)src));
}
// #include <stdio.h>
// int main()
// {
//     char a[10];
//     printf("ret: %lu \n", ft_strlcpy(a, "jhgbh", 0));
//     //printf("Value: %s \n", a);
//     return (0);
// }

