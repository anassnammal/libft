/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anammal <anammal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 19:01:06 by anammal           #+#    #+#             */
/*   Updated: 2022/10/08 09:20:15 by anammal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n-- >= 0)
	{
		if (*(const unsigned char *)s1++ != *(const unsigned char *)s2++)
			return (*(const unsigned char *)--s1 - *(const unsigned char *)--s2);
	}
	return (0);
}
