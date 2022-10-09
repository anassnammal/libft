/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anammal <anammal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 13:07:41 by anammal           #+#    #+#             */
/*   Updated: 2022/10/09 13:07:43 by anammal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*cpy;
	int		len;
	int		i;

	len = ft_strlen(s1) + 1;
	cpy = (char *) malloc(len * sizeof(char));
	if (cpy)
	{
		i = 0;
		while (len > i)
		{
			*(cpy + i) = *(s1 + i);
			i++;
		}
	}
	return (cpy);
}