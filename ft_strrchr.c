/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anammal <anammal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:59:51 by anammal           #+#    #+#             */
/*   Updated: 2022/10/08 09:39:30 by anammal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int i;
	char *str;

	i = ft_strlen(s) - 1;
	str = (char *) s;
	while (*(str + i))
	{
		if (*(str + i) == c)
			return (str + i);
		i--;
	}
	return (0);
}
