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
	int	p;

	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	s = 1;
	if ((*str == '-' || *str == '+') && ft_isdigit(*(char *)(str + 1)))
		s = 44 - *(str++);
	r = 0;
	p = 0;
	if (ft_strlen(str) >= 10 && !ft_isdigit(*(str + 10))
		&& ft_strncmp(str, "2147483648", 10) == 0 && s == -1)
		return (-2147483648);
	while (ft_isdigit(*str))
	{
		if (r < p)
			break ;
		p = r;
		r = r * 10 + ((*str++) - 48);
	}
	if (r < p)
		return ((s == -1) - 1);
	return (r * s);
}
