/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinglee <jinglee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 16:56:18 by jinglee           #+#    #+#             */
/*   Updated: 2021/01/11 17:16:17 by jinglee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

void	ft_bzero(void *str, size_t len)
{
	unsigned char *s;

	s = str;
	while (len--)
		*s++ = 0;
}
