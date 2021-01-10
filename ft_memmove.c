/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinglee <jinglee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 16:05:56 by jinglee           #+#    #+#             */
/*   Updated: 2021/01/09 17:09:01 by jinglee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *d;
	const unsigned char *s;

	d = dst;
	s = src;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst <= src)
	{	
		while(len--)
			*d++ = *s++;
	}
	if (dst > src)
	{
		d += len;
		s += len;
		while(len--)
			*--d = *--s;
	}
	return (dst);
}
