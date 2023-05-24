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
	int		s1_len;
	int		s2_len;
	int		t_len;
	char	*joined;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	t_len = s1_len + s2_len + 1;
	joined = (char *)malloc((t_len) * sizeof(char));
	if (joined == NULL)
		return (NULL);
	ft_strlcpy(joined, s1, t_len);
	ft_strlcpy(joined + s1_len, s2, t_len);
	return (joined);
}
