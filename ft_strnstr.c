/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anammal <anammal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 20:36:47 by anammal           #+#    #+#             */
/*   Updated: 2022/10/08 09:20:54 by anammal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	nlen;

	if (*needle)
	{
		nlen = (size_t)ft_strlen(needle);
		while (*haystack && *needle && len > 0 && nlen)
		{
			if (*haystack == *needle && nlen <= len
				&& !ft_strncmp(haystack, needle, nlen))
				return ((char *)haystack);
			haystack++;
			len--;
		}
		return (NULL);
	}
	return ((char *)haystack);
}
