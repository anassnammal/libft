/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anammal <anammal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 13:06:25 by anammal           #+#    #+#             */
/*   Updated: 2022/10/09 13:06:30 by anammal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int tmp;
	int len;
	char *str;

	tmp = n;
	len = 0;
	while (tmp != 0)
	{
		tmp /= 10;
		len++;
	}
	str = (char *) malloc((len + 1) * sizeof(char));
	if (str)
	{
		*(str + len) = '\0';
		while (--len >= 0)
		{
			*(str + len) = (n % 10) + 48;
			n /= 10;
		}
	}
	return (str);
}