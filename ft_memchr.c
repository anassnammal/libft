/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anammal <anammal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:49:42 by anammal           #+#    #+#             */
/*   Updated: 2022/10/08 09:20:10 by anammal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s + i) == c)
			return ((void *)s + i);
		i++;
	}
	return (0);
}
