/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anammal <anammal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 17:04:04 by anammal           #+#    #+#             */
/*   Updated: 2022/10/08 09:20:25 by anammal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;
	int 	i;

	s = (char *) src;
	d = (char *) dst;
	i = 0;
	if (d < s)
	{
		while (len > i)
		{
			*(d + i) = *(s + i);
			i++;
		}
	}
	else
	{
		len--;
		while (len >= 0)
		{
			*(d + len) = *(s + len);
			len--;
		}
	}
	return (dst);
}
