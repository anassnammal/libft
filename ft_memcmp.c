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
	unsigned char *c1;
	unsigned char *c2;

	c1 = (unsigned char *) s1;
	c2 = (unsigned char *) s2;
	while (n-- > 0)
	{
		if (*c1++ != *c2++)
			if (*c1 - *c2 < 0)
				return (-1);
			else
				return (1);
	}
	return (0);
}
