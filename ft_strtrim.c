/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinglee <jinglee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 17:33:14 by jinglee           #+#    #+#             */
/*   Updated: 2021/01/26 19:40:47 by jinglee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
    char    *ptr;
    size_t  s1_len;
    size_t     i;
    size_t     a;

    if (!s1 || !set)
        return (NULL);
    i = 0;
    while(strchr(set, s1[i]) && *s1 && i < strlen(s1))
        i++;
    s1_len = strlen(s1);
    while(strchr(set, s1[s1_len - 1]) && *s1 && s1_len > i)
        s1_len--;
    ptr = malloc(s1_len - i + 1);
    if(!ptr)
        return (NULL);
    a = 0;
    while(i < s1_len)
        ptr[a++] = s1[i++];
    ptr[a] = '\0';
    return (ptr);
}

