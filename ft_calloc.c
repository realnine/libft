/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinglee <jinglee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 15:15:08 by jinglee           #+#    #+#             */
/*   Updated: 2021/02/08 16:12:57 by jinglee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t sizof)
{
	void *ptr;

	ptr = malloc(sizof * n);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, n * sizof);
	return (ptr);
}
