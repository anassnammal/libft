/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anammal <anammal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 13:07:50 by anammal           #+#    #+#             */
/*   Updated: 2022/10/09 13:07:52 by anammal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	int		i;
	char	*str;

	if (s1 != 0 && s2 != 0)
	{
		len = ft_strlen(s1);
		len += ft_strlen(s2);
		str = (char *) malloc((len + 1) * sizeof(char));
		if (str)
		{
			i = 0;
			while (*s1)
				*(str + i++) = *s1++;
			while (*s2)
				*(str + i++) = *s2++;
			*(str + i) = '\0';
		}
		return (str);
	}
	return (NULL);
}
