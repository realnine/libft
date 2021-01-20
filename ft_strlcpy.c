/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinglee <jinglee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 16:30:01 by jinglee           #+#    #+#             */
/*   Updated: 2021/01/16 14:35:40 by jinglee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t srcsize;

	srcsize = ft_strlen(src);

	if (n == 0)      //n이 0일 때는 그냥 src 사이즈만 리턴한다
		return (srcsize);

	if (srcsize < n)   // n값이 src 사이즈 보댜 클때
		ft_memcpy(dst, src, srcsize + 1); // 복사할 사이즈를 src사이즈 + 1 로 변경

	if(srcsize >= n)  // n값이 src사이즈 보다 같거나 작을 때
	{
		ft_memcpy(dst, src, n - 1); // n-1 만큼만 복사, 마지막에 '\0'을 넣어야 하기 때문 
		dst[n - 1] = '\0'; // dst 의마지막 n번째 인덱스는 n-1 (0부터 시작하니까)
	}

	return (srcsize);
}
