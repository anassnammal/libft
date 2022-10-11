/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anammal <anammal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 20:36:47 by anammal           #+#    #+#             */
/*   Updated: 2022/10/08 09:20:54 by anammal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t nlen;

	if (len > 0 && *needle)
	{
		nlen = ft_strlen(needle);
		while (haystack && needle && len-- > 0)
		{
			if (*haystack == *needle && nlen <= len && !ft_strncmp(haystack, needle, nlen))
				return ((char *)haystack);
			haystack++;
		}
		return (0);
	}
	return ((char *)haystack);
}

// int main(void)
// {
// 	char	*s1 = "oh no not the empty string !";
// 			char	*s2 = "";
// 			size_t	max = strlen(s1);

// 	char	*i1 = strnstr(s1, s2, max);
// 	char	*i2 = ft_strnstr(s1, s2, max);
// 	printf("%s\n%s\n", i1, i2);
// 	return 0;
// }

