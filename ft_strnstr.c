/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinglee <jinglee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 16:47:54 by jinglee           #+#    #+#             */
/*   Updated: 2021/01/18 15:45:06 by jinglee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

char		*ft_strnstr(const char *src, const char *word, size_t ran)
{
	size_t 	word_len;
	int 	res;

	word_len = ft_strlen(word);
	if (*word  != '\0')
	{	
		if (ran == 0)
			return (NULL);
		while (1)
		{
			res = ft_strncmp(src, word, word_len);
			if (res == 0)
				break;
			if (*++src == '\0')
				return (NULL);
			if (--ran < word_len)
				return (NULL);
		}
	}
	return ((char *)src);
}
