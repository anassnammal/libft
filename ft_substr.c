/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anammal <anammal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 13:08:05 by anammal           #+#    #+#             */
/*   Updated: 2022/10/09 13:08:07 by anammal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	if (s != 0)
	{
		i = 0;
		if (start >= ft_strlen(s))
			len = 0;
		substr = (char *) malloc((len + 1) * sizeof(char));
		if (substr)
		{
			while (i < len)
			{
				*(substr + i) = *(s + start);
				start++;
				i++;
			}
			*(substr + i) = '\0';
		}
		return (substr);
	}
	return (NULL);
}
