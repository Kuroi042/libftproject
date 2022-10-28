/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouderr <mbouderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 03:06:06 by mbouderr          #+#    #+#             */
/*   Updated: 2022/10/28 02:48:43 by mbouderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*p;
	size_t	i;

	i = 0;
	str = (char *)s;
	if (!s)
		return (NULL);
	p = (char *)malloc(sizeof(char) * (len + 1));
	if (!p)
		return (NULL);
	if (start >= ft_strlen(str))
	{
		free(p);
		p = (char *)malloc(sizeof(char));
		if (!p)
			return (NULL);
		p[0] = '\0';
		return (p);
	}
	while (i < len)
		p[i++] = str[start++];
	p[i] = '\0';
	return (p);
}
