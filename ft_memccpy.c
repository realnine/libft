/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinglee <jinglee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 13:04:43 by jinglee           #+#    #+#             */
/*   Updated: 2021/01/15 20:56:00 by jinglee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t len)
{
	unsigned char *d;
	unsigned char *s;
	unsigned char *pt;
	size_t num_c;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	

	pt = ft_memchr(s, c, len);
	if (pt == NULL)
	{
		ft_memcpy(d, s, len);
		return (NULL);
	}
	num_c = (pt - s + 1);
	ft_memcpy(d, s, num_c);
	return (d + num_c);
}
