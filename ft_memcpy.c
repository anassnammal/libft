/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anammal <anammal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:22:48 by anammal           #+#    #+#             */
/*   Updated: 2022/10/08 09:20:21 by anammal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dest;
   
	dest = (unsigned char *)dst;
	while (n-- > 0)
		*(unsigned char *)dest++ = *(unsigned char *)src++;
	return ((void *)dst);
}