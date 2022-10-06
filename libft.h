/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouderr <mbouderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 22:37:15 by mbouderr          #+#    #+#             */
/*   Updated: 2022/10/06 23:06:47 by mbouderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <string.h>
#include <stdlib.h>

void ft_bzero(void *s , size_t n );
int isalnum (int c);
int ft_isalpha (int  c);
int ft_isascii(int i);
int ft_isdigit (int c);
int ft_isprint(int i );
void *ft_memcpy(void *dst, const void *src, size_t n);
void * ft_memmove(void *dst , const void *src , size_t len);
void *ft_memset(void *s, int c, size_t len);
int ft_strlen(char *str);
int ft_toupper(int c);
int ft_tolower(int c);
char *ft_strchr(const char *s, int c);
char *strrchr(const char *s, int c);
int ft_strncmp(const char *s1, const char *s2, size_t n);
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);
void *ft_memchr(const void *s, int c, size_t n);


#endif