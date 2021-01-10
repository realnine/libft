/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinglee <jinglee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 13:04:43 by jinglee           #+#    #+#             */
/*   Updated: 2021/01/09 15:04:08 by jinglee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, void *src, int c, size_t len)
{
	void *pt;
	size_t num_c;

	pt = ft_memchr(src, c, len);
	if (pt == NULL)
	{
		ft_memcpy(dst, src, len);
		return (NULL);
	}
	num_c = (pt - src + 1);
	ft_memcpy(dst, src, num_c);
	return (dst + num_c);
}
