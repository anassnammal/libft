/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anammal <anammal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 13:18:45 by anammal           #+#    #+#             */
/*   Updated: 2022/10/09 16:40:26 by anammal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*res;
	unsigned int	len;

	if (s && (*f))
	{
		len = ft_strlen(s);
		res = (char *)malloc((len + 1) * sizeof(char));
		if (res)
		{
			*(res + len) = '\0';
			while (len-- > 0)
				*(res + len) = f(len, *(char *)(s + len));
			return (res);
		}
	}
	return (NULL);
}
