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
#include <stdio.h>

static void	ft_memclear(char **strs, int last)
{
	int	i;

	i = 0;
	while (i < last)
		free(strs[i++]);
	free(strs);
	strs = NULL;
}

static int	ft_counter(const char *s, char d)
{
	int	i;

	i = 0;
	while (*s)
	{
		while (*s && *s == d)
			s++;
		while (*s && *s != d)
			s++;
		if (*(s - 1) != d)
			i++;
	}
	return (i);
}

static int	ft_strdlen(const char *s, char d)
{
	int	i;

	i = 0;
	while (*s && *s++ != d)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	int		tmplen;
	char	**strs;
	int		i;

	strs = (char **)malloc((ft_counter(s, c) + 1) * sizeof(char *));
	if (strs)
	{
		i = 0;
		while (*s)
		{
			tmplen = 0;
			while (*s && *s == c)
				s++;
			if (*s && *s != c)
				*(strs + i++) = ft_substr(s, 0, tmplen = ft_strdlen(s, c));
			if (!(strs + i))
				return (ft_memclear(strs, i), NULL);
			s += tmplen;
		}
		*(strs + i) = NULL;
	}
	return (strs);
}

// int	main(void)
// {
// 	char **strs;

// 	strs = ft_split("^^^1^^2a,^^^^3^^^^--h^^^^", '*');
// 	printf("%s\n", *strs);
// 	printf("%s\n", strs[1]);
// 	printf("%s\n", *(strs + 2));
// 	printf("%s\n", *(strs + 3));
// 	printf("%s\n", *(strs + 4));
// 	//printf("%s\n", *(strs + 5));
// 	free(strs);
// }
