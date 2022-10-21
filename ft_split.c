/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anammal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:42:36 by anammal           #+#    #+#             */
/*   Updated: 2022/10/11 11:42:41 by anammal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	**ft_strsfill(char **strs, char *s, char c, int strs_s)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	while (*(s + i) && k < strs_s)
	{
		j = 0;
		while (*(s + i + j) != c)
			j++;
		if (*(s + i + j - 1) != c && *(s + i + j) == c)
		{
			*(strs + k) = ft_substr((char *)s, i, j);
			i += j;
			k++;
		}
		i++;
	}
	*(strs + k++) = NULL;
	return (strs);
}

static int	ft_strscnt(char *s, char c)
{
	int	i;

	if (c != '\0')
	{
		i = 0;
		while (*s == c)
			s++;
		while (*s)
		{
			if (*s != c && (*(s + 1) == c || *(s + 1) == '\0'))
				i++;
			s++;
		}
		return (i);
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	int		strs_s;
	char	**strs;

	if (s)
	{
		strs_s = ft_strscnt((char *)s, c);
		strs = (char **) malloc((strs_s + 1) * sizeof(char *));
		if (strs)
		{
			while (*s == c)
					s++;
			strs = ft_strsfill(strs, (char *)s, c, strs_s);
			return (strs);
		}
	}
	return (NULL);
}
