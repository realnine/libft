/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinglee <jinglee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 17:20:57 by jinglee           #+#    #+#             */
/*   Updated: 2021/01/22 19:08:12 by jinglee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

char	*ft_substr(char const *src, unsigned int start, size_t len)
{
	char *dst;
	unsigned int src_siz;
	int i;

	dst = malloc(len + 1);
	if (!dst || !src)
		return (NULL);
	src_siz = strlen(src);
	i = 0;
	while(src[start] && len-- && start < src_siz)
		dst[i++] = src[start++];
	dst[i] = '\0';
	return (dst);
}

//char
//    *ft_substr(char const *s, unsigned int start, size_t len)
//{
//    size_t  i;
//    size_t  j;
//    char    *str;
//
//str = (char*)malloc(sizeof(*s) * (len + 1));
//if (!str)
//    return (NULL);
//i = 0;
//j = 0;
//while (s[i])
//{
//    if (i >= start && j < len)
//        {
//            str[j] = s[i];
//            j++;
//        }
//        i++;
//    }
//    str[j] = 0;
//    return (str);
//}
