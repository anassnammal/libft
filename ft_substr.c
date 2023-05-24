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
	size_t	s_len;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (start > s_len || len == 0)
		return (ft_strdup(""));
	else if (len + start > s_len)
		len = s_len - start;
	substr = (char *) malloc((len + 1) * sizeof(char));
	if (substr)
		ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}
