#include "libft.h"
#include <stdio.h>
char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		i;
	int		j;
	int		k;
	int		count;
	int		len;

	i = 0;
	count = 0;
	while (*(s + i))
	{
		if (*(s + i) == c)
			count++;
		i++;
	}
	len = i;
	strs = (char **) malloc((len + 1) * sizeof(char));
	if (strs)
	{
		i = 0;
		k = -1;
		while (*(s + i))
		{
			j = 0;
			if (i == 0 || *(s + i) == c)
			{
				if (*(s + i) == c)
					i++;
				while (*(s + (i + j)) && *(s + (i + j)) != c)
					j++;
				*(strs + (++k)) = (char *) malloc ((j + 1) * sizeof(char));		
				strs[k][j] = '\0';
				while (--j >= 0)
					strs[k][j] = s[i + j];
			}
			i++;
		}
	}
	return (strs);
}