/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anammal <anammal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 13:06:08 by anammal           #+#    #+#             */
/*   Updated: 2022/10/09 13:06:10 by anammal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (count && size)
		if ((size_t)(-1) <= count / size)
			return (NULL);
	ptr = malloc (count * size);
	if (ptr)
		ft_bzero(ptr, count * size);
	return (ptr);
}
