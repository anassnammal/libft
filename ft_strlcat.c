/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anammal <anammal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:29:59 by anammal           #+#    #+#             */
/*   Updated: 2022/10/11 11:38:25 by anammal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	*ft_strcat(char	*s1, const char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		s1[i] = s2[j];
		j++;
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

static char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	j;
	size_t	l;

	j = 0;
	l = ft_strlen(s1);
	while (s2[j] && j < n)
	{
		s1[l] = s2[j];
		j++;
		l++;
	}
	s1[l] = '\0';
	return (s1);
}

size_t ft_strlcat(char *dst, const char	*src, size_t dstsize)
{
	size_t	l_dest;
	size_t	l_src;

	l_src = ft_strlen(src);
	if (dstsize > 0 || dst)
	{
		l_dest = ft_strlen(dst);
		if ((l_src + l_dest + 1) <= dstsize)
		{
			ft_strcat(dst, src);
			return (l_src + l_dest);
		}
		else if (dstsize < (l_src + l_dest + 1)
			&& dstsize != 1 && dstsize > l_dest)
		{
			ft_strncat(dst, src, dstsize - l_dest - 1);
			return (l_src + l_dest);
		}
		else if (dstsize == 1)
		{
			dst[l_dest] = '\0';
			return (l_src + 1);
		}
		return (l_src + dstsize);
	}	
	return (l_src);
}
