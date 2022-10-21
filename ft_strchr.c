/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anammal <anammal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:50:29 by anammal           #+#    #+#             */
/*   Updated: 2022/10/08 09:20:34 by anammal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	last;

	last = ft_strlen(s);
	while (last-- >= 0)
	{
		if (*s++ == (char)c)
			return ((char *)(s - 1));
	}
	return (NULL);
}
