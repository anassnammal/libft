/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anammal <anammal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:29:59 by anammal           #+#    #+#             */
/*   Updated: 2022/10/11 11:38:25 by anammal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char	*src, size_t dstsize)
{
	size_t	ldst;

	if (dstsize)
		ldst = ft_strlen(dst);
	if (dst && dstsize)
	{
		if (dstsize > ldst)
			return (ldst + ft_strlcpy((dst + ldst), src, dstsize - ldst));
	}
	return (dstsize + ft_strlen(src));
}
