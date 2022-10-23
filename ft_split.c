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

static char	**ft_strsfill(char **strs, char *s, char c, int strs_s)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	while (*(s + i) && k <= strs_s)
	{
		j = 0;
		while (*(s + i + j) != c && *(s + i + j))
			j++;
		if (*(s + i + j - 1) != c && (*(s + i + j) == c || !(*(s + i + j))))
		{
			*(strs + k) = ft_substr((char *)s, i, j);
			i += j;
			k++;
		}
		i++;
	}
	*(strs + strs_s) = NULL;
	return (strs);
}

static int	ft_strscnt(char *s, char c)
{
	int	i;

	if (c != '\0')
	{
		i = 0;
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
		while (*s == c)
			s++;
		strs_s = ft_strscnt((char *)s, c);
		strs = (char **) malloc((strs_s + 1) * sizeof(char *));
		if (strs)
		{
			strs = ft_strsfill(strs, (char *)s, c, strs_s);
			return (strs);
		}
	}
	return (NULL);
}

int	main(void)
{
	char **strs;

	strs = ft_split("      anass   nammal  g   .    ", ' ');
	printf("%s\n", *strs);
	printf("%s\n", strs[1]);
	printf("%s\n", *(strs + 2));
	printf("%s\n", *(strs + 3));
	printf("%p\n", *(strs + 4));
	free(strs);
}
