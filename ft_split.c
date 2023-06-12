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

static void	ft_memclear(char **strs, int last)
{
	int	i;

	i = 0;
	while (i < last)
	{
		ft_bzero(*(strs + i), ft_strlen(*(strs + i)));
		free(*(strs + i));
		*(strs + i) = NULL;
		i++;
	}
	free(strs);
}

static char	*ft_skiper(char *s, char d, int o)
{
	if (o)
	{
		while (*s == d && *s)
			s++;
	}
	else
	{
		while (*s != d && *s)
			s++;
	}
	return (s);
}

static char	**ft_realloc(char **t, int l)
{
	char	**new;
	int		i;

	new = (char **)malloc(sizeof(char *) * (l + 1));
	if (new)
	{
		i = -1;
		while (++i < l)
			*(new + i) = *(t + i);
		return (free(t), new);
	}
	return (ft_memclear(t, l), NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		i;

	strs = (char **)malloc(sizeof(char *));
	if (strs)
	{
		i = 0;
		s = ft_skiper((char *)s, c, 1);
		while (*s)
		{
			*(strs + i) = ft_substr(s, 0, ft_strdlen((char *)s, c));
			if (!*(strs + i))
				return (ft_memclear(strs, i), NULL);
			strs = ft_realloc(strs, ++i);
			if (!strs)
				return (NULL);
			s = ft_skiper((char *)s, c, 0);
			s = ft_skiper((char *)s, c, 1);
		}
		*(strs + i) = NULL;
	}
	return (strs);
}
