/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinglee <jinglee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 12:30:41 by jinglee           #+#    #+#             */
/*   Updated: 2021/01/09 15:11:07 by jinglee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *src, int c,  size_t len)
{
	unsigned char *s;
	unsigned char ch;

	s = src;
	ch = c;
	while (len--)
	{
		if (*s == ch)
			return ((void *)s);
		s++;
	}
	return (NULL);
}
