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
	size_t i;
	unsigned char *str;
	unsigned char chr;

	i = 0;
	str = (unsigned char *) s;
	chr = (unsigned char) c;
	while (i < n)
	{
		if (*(str + i) == chr)
			return (str + i);
	}
	return (0);
}
