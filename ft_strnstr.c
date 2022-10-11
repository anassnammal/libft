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

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if (needle)
	{
		while (*haystack)
		{
			if (*haystack == *needle && !ft_strncmp(haystack, needle, ft_strlen(needle)))
				return (haystack);
			haystack++;
		}
	}
	else
		return (haystack);
	return (NULL);
}
