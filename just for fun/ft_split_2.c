#include "libft.h"
#include <stdio.h>

static void ft_free(char **strs, int last)
{
	int i;

	i = 0;
	while (i < last)
		free(strs[i++]);
	free(strs);
	strs = NULL;
}

static int	ft_strdlen(const char *s, char d)
{
	int	i;
	
	i = 0;
	while (*(s + i) != d && *(s + i))
		i++;
	return (i);
}

static int	ft_wcount(const char *s, char c)
{
	int cw;
	int len;

	cw = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		len = ft_strdlen(s, c);
		if (len)
		{
			cw++;
			s += len;
		}
	}
	return (cw);
}

char	**ft_split2(char const *s, char c)
{
	int cw;
	int i;
	int j;
	char **strs;

	cw = ft_wcount(s, c);
	strs = (char **)malloc((cw + 1) * sizeof(char *));
	if (strs)
	{
		i = 0;
		while (i < cw)
		{
			if (*s != c && *s)
			{
				j = ft_strdlen(s, c);
				*(strs + i) = ft_substr(s, 0, j);
				if (!*(strs + i))
					return (ft_free(strs, i), NULL);
				s = s + j;
				i++;
			}
			else
				s++;
		}
		*(strs + i) = NULL;
	}
	return (strs);
}

// int main(void)
// {
// 	char **strs;

// 	strs = ft_split2("hey\0you\0!\0", '\0');
// 	printf("%s\n", strs[0]);
// 	printf("%s\n", strs[1]);
// 	printf("%s\n", strs[2]);
// 	printf("%s\n", strs[3]);
// 	return 0;
// }
