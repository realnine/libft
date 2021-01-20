/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinglee <jinglee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 15:45:31 by jinglee           #+#    #+#             */
/*   Updated: 2021/01/20 15:13:53 by jinglee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

int	ft_atoi(const char *str)
{
	int		sign;
	unsigned long 	res;

	sign = 1;
	res = 0;
	while ((9 <= *str && *str <= 13) || *str == ' ')
		str++;

	while (*str == '+' || *str == '-')
	{
		if (*str++ == '-')
			sign = -1;
	}	
	while (ft_isdigit(*str))
		res = res * 10 + (*str++ - '0');
	


	if (res > INT_MAX && sign == 1)
		return (-1);
	if (res > (unsigned long)labs(INT_MIN) && sign == -1)
		return (0);

	return (res * sign);
}

// int ft_atoi(const char *str)
// {
//     char                neg;
//     unsigned long long  num;
//
//     while ((9 <= *str && *str <= 13) || *str == ' ')
//		str++;
//
//     neg = (*str == '-');
//     if (*str == '+' || *str == '-')
//         str++;
//
////	while (*str == '+' || *str == '-')
////	{
////		if (*str++ == '-')
////			sign *= -1;
////	}
//
//     num = 0;
//     while (ft_isdigit(*str))
//         num = num * 10 + (*str++ - '0');
//
//
//     if (num > 9223372036854775807  && neg == 1)
//         return (0);
//     if (num > 9223372036854775807 && neg == 0)
//         return (-1);
//     return (neg ? -num : num);
// }
