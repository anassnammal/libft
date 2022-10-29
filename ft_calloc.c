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
	int t;

	if ((size_t)(-1) <= count / size)
		return (NULL);
	if (count && size)
		t = count * size;
	else
		t = 1;
	ptr = malloc (t);
	if (ptr)
		bzero(ptr, t);
	return (ptr);
}
