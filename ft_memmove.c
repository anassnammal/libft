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
	if (src != dst)
	{
		if (dst <= src)
			dst = (unsigned char *)ft_memcpy(dst, src, len);
		else
		{
			while (len-- > 0)
				*(unsigned char *)(dst + len) = *(unsigned char *)(src + len);
		}
	}
	return ((void *)dst);
}
