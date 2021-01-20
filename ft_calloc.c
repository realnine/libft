/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinglee <jinglee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 15:15:08 by jinglee           #+#    #+#             */
/*   Updated: 2021/01/20 15:56:24 by jinglee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

void	*ft_calloc(size_t cnt, size_t siz)
{
	void *ptr;

	ptr = malloc(siz * cnt);
	if (!ptr)
		return (NULL);

	ft_memset(ptr, 0, cnt * siz);
	return (ptr);
}
