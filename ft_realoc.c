/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realoc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anammal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 09:48:39 by anammal           #+#    #+#             */
/*   Updated: 2023/10/14 09:48:42 by anammal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	**ft_realloc(void **t, int l, int p)
{
	void	**new;
	int		i;

	if (p <= 0)
		return (t);
	new = ft_calloc(sizeof(void *), (l + p));
	if (new)
	{
		i = -1;
		while (++i < l)
			*(new + i) = *(t + i);
		ft_bzero(t, sizeof(void *) * l);
		return (free(t), new);
	}
	return (NULL);
}
