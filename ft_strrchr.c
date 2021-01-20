/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinglee <jinglee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 17:36:18 by jinglee           #+#    #+#             */
/*   Updated: 2021/01/14 17:42:29 by jinglee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char *p;

	p = NULL;  // *str == 0 인경우 return 할 p가 할당되지 않고 리턴되는 것을 방지
	while(1)
	{
		if (*str == (char)c)   // str == null 인 경우 여기서 segfault (*str)
			p = (char *)str;
		if (*str == '\0')
			return (p);
		str++;
	}
}

