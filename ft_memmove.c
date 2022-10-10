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
	unsigned char	dest[len];
	size_t			i;

	i = 0;
	while (++i <= len)
		*(dest + i - 1) = *(unsigned char *)(src + i - 1);
	i = 0;
	while (++i <= len)
		*(unsigned char *)(dst + i - 1) = *(dest + i - 1);
	return (dst);
}

