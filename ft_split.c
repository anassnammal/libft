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

static int	ft_strscnt(char *s, char c)
{
	int i;
    
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

static char	*ft_strfill(char *str, char *s, int i, int j)
{
	int k;

	k = 0;
	str = (char *)malloc(sizeof(char) * (j - i + 1));
	if (s)
	{
		while (i < j)
			*(str + k++) = *(s + i++);
		*(str + k) = '\0';
	}
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int strs_s;
	char **strs;
	int i;
	int j;

	strs_s = ft_strscnt((char *)s, c);
	strs = (char **) malloc((strs_s + 1) * sizeof(char *));
	if (strs)
	{
		*(strs + strs_s) = NULL;
		i = 0;
		while (*s + i && --strs_s >= 0)
		{
			j = 0;
			while (*s + i + j != c)
				j++;
			*(strs + strs_s) = ft_strfill(str);
			i++;
		}
		return (strs);
	}
	return (NULL);
}

int main(void)
{
	char ** strs = ft_split("      split       this for   me  !", ' ');
	printf("%s\n%s\n%s\n%s\n%s\n", strs[0],strs[1],strs[2],strs[3],strs[4]);
	return 0;
}
