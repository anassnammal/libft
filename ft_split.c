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
static int wrd_count(char const *s, char c)
{
	int i;

	i = 0;
	while (*s)
	{
		if (*(char *)s == c)
		{
			while (*(char *)s == c)
				(char *)s++;
			i++;
		}
		(char *)s++;
	}
	return (i + 1);
}
char	**ft_split(char const *s, char c)
{
	while (/* condition */)
	{
		/* code */
	}
	
}
