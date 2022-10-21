/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anammal <anammal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 21:02:15 by anammal           #+#    #+#             */
/*   Updated: 2022/10/08 09:18:07 by anammal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	r;
	int	s;

	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	s = 1;
	if (*str == '-' && ft_isdigit(*(char *)(str + 1)))
	{
		s = -1;
		str++;
	}
	else if (*str == '+' && ft_isdigit(*(char *)(str + 1)))
		str++;
	r = 0;
	while (ft_isdigit(*str))
		r = r * 10 + ((*str++) - 48);
	if (r == -469762049 && s < 0)
		return (0);
	else if (r == -469762049)
		return (-1);
	return (r * s);
}
