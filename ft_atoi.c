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
	int	n;
	int	s;

	while (ft_isspace(*str))
		str++;
	s = 1;
	if ((*str == '-' || *str == '+') && ft_isdigit(*(char *)(str + 1)))
		s = 44 - *(str++);
	n = 0;
	if (s == -1 && ft_strlen(str) >= 10 && !ft_isdigit(*(str + 10))
		&& ft_strncmp(str, "2147483648", 10) == 0)
		return (-2147483648);
	while (ft_isdigit(*str))
	{
		n = n * 10 + ((*str) - 48);
		if (n % 10 != (*(str) - 48))
			return ((s == -1) - 1);
		str++;
	}
	return (n * s);
}
