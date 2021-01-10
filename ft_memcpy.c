/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinglee <jinglee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 20:19:39 by jinglee           #+#    #+#             */
/*   Updated: 2021/01/09 13:42:45 by jinglee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, void *src, size_t len)
{
	unsigned char *d;
	unsigned char *s;

	d = dst;
	s = src;
	while (len--)
	{
		if (d == NULL && s == NULL)
			return (NULL);
		*d++ = *s++;
	}
	return (dst);
}
