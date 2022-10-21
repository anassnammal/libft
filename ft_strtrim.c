/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anammal <anammal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 13:05:43 by anammal           #+#    #+#             */
/*   Updated: 2022/10/09 13:05:52 by anammal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	check_set(char *set, char c)
{
	while (*set)
	{
		if (*set++ == c)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*res;

	if (s1 != 0 && set != 0)
	{
		while (*s1 && check_set((char *)set, *s1))
			s1++;
		i = ft_strlen(s1);
		while (*s1 && check_set((char *)set, *(s1 + i - 1)))
			i--;
		res = (char *) malloc(sizeof(char) * (i + 1));
		if (res)
		{
			*(res + i) = '\0';
			while (--i >= 0)
				*(res + i) = *(char *)(s1 + i);
			return (res);
		}
	}
	return (NULL);
}
