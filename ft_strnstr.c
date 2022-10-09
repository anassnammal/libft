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
	size_t	i;
	size_t	j;
	size_t	n;
	char	*s;

	i = 0;
	j = 0;
	n = ft_strlen(needle);
	s = (char *) haystack;
	if (n == 0)
		return (s);
	while (s[i] != '\0' && i < len)
	{
		if (needle[j] == s[i] && j < n)
			j++;
		else
			j = 0;
		i++;
		if (j == n)
			return (s + i - n);
	}
	return (0);
}
