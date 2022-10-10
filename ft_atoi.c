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
	int r;
	int s;

	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	s = 1;
	if ((*str == '-' || *str == '+') && ft_isdigit(str + 1))
	{
		if (*str == '-')
			s = -1;
		str++;
	}
	r = 0;
	while (ft_isdigit(*str))
		r = r * 10 + ((*str++) - 48);
	return (r * s);
}