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
	int	i;
	int	j;
	int	n;

	i = 0;
	j = 0;
	n = ft_strlen(needle);
	if (n == 0)
		return (haystack);
	while (haystack[i] != '\0' && i < len)
	{
		if (needle[j] == haystack[i] && j < n)
			j++;
		else
			j = 0;
		i++;
		if (j == n)
			return (haystack + i - n);
	}
	return (0);
}
