/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anammal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:41:34 by anammal           #+#    #+#             */
/*   Updated: 2022/10/11 11:41:40 by anammal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int		ft_nbrlen(int n)
{
	int o;

	o = 0;
	while (n != 0)
	{
		n /= 10;
		o++;
	}
	return (o);
}

static void		ft_populate(char *dst, int n, int len)
{
	dst[len] = '\0';
	while (n != 0 || len == 1)
	{
		dst[--len] = (char)(n % 10 + 48);
		n /= 10;
	}
}
char	*ft_itoa(int n)
{
	int		s;
	int		len;
	char	*output;

	s = 0;
	if (n < 0 && n != -2147483648)
	{
		s++;
		n *= -1;
	}
	len = ft_nbrlen(n) + s;
	if (!len)
		len++;
	output = (char *) malloc(len * sizeof(char) + 1);
	if (output)
	{
		if (n == -2147483648)
			output = "-2147483648";
		else
			ft_populate(output, n, len);
		if (s)
			output[0] = '-';
		return (output);
	}
	return (NULL);
}
