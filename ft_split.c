/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anammal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:42:36 by anammal           #+#    #+#             */
/*   Updated: 2022/10/11 11:42:41 by anammal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

// static int	ft_strscnt(char *s, char c)
// {
// 	int i;
// 	int r;


// 	i = 0;
// 	r = 0;
// 	while (*(s + i))
// 	{
// 		while (*s && *s != c)
// 			s++;
// 		if (*s == c && *(s - 1) != c)
// 			r++;
// 		if (*s)
// 			s++;
// 	}
// 	return (r + 1);
// }

// static char	*ft_strfill(char *str, char *s, int i, int j)
// {
// 	int k;

// 	k = 0;
// 	str = (char *)malloc(sizeof(char) * (j - i + 1));
// 	if (s)
// 	{
// 		while (i < j)
// 			*(str + k++) = *(s + i++);
// 		*(str + k) = '\0';
// 	}
// 	return (str);
// }

// char	**ft_split(char const *s, char c)
// {

// }

// int main(void)
// {
// 	char ** strs = ft_split("      split       this for   me  !       ", ' ');
// 	printf("%s\n%s\n%s\n%s\n%s\n", strs[0],strs[1],strs[2],strs[3],strs[4]);
// 	return 0;
// }
