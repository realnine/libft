/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinglee <jinglee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 16:02:44 by jinglee           #+#    #+#             */
/*   Updated: 2021/02/08 16:04:26 by jinglee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*ptr;
	size_t	len;

	len = strlen(str);
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	memcpy(ptr, str, len);
	ptr[len] = '\0';
	return (ptr);
}
