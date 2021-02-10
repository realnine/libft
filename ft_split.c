/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinglee <jinglee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 13:33:21 by jinglee           #+#    #+#             */
/*   Updated: 2021/02/09 15:50:26 by jinglee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_mulfree(char **pt)
{
	int i;

	i = 0;
	while (pt[i])
		free(pt[i++]);
	free(pt);
}

int			ft_insertnul(char *p, char c, int pas)
{
	while (*p)
	{
		if (*p != c)
			pas++;
		p = ft_strchr(p, c);
		if (!p)
			break ;
		*p = '\0';
		p++;
	}
	return (pas);
}

char		**ft_fillptr(char **ptr, char *ss, int pas)
{
	int i;

	i = 0;
	while (pas-- > 0)
	{
		while (*ss == '\0')
			ss++;
		if (!(ptr[i++] = ft_strdup(ss)))
		{
			ft_mulfree(ptr);
			return (NULL);
		}
		ss += ft_strlen(ss);
	}
	return (ptr);
}

char		**ft_split(char const *s, char c)
{
	char	**ptr;
	char	*ss;
	char	*p;
	int		pas;

	if (!s || !(ss = ft_strdup(s)))
		return (NULL);
	pas = 0;
	p = ss;
	pas = ft_insertnul(p, c, pas);
	if (!(ptr = ft_calloc((pas + 1), sizeof(char *))))
		return (NULL);
	ptr = ft_fillptr(ptr, ss, pas);
	return (ptr);
}
