#include "libft.h"
#include <stdio.h>

static char *ft_skiper(char *s, char d, int o)
{
	if (o)
	{
		while (*s == d && *s)
			s++;
	}
	else
	{
		while (*s != d && *s)
			s++;
	}
	return (s);
}

static int ft_strdlen(char *s, char d)
{
	int c;

	c = 0;
	while (*(s + c) && *(s + c) != d)
		c++;
	return c;
}

static char **ft_realoc(char **t, int l)
{
	char **new;
	int i;

	new = (char **)malloc(sizeof(char *) * (l + 1));
	if (new)
	{
		i = -1;
		while (++i < l)
			*(new + i) = *(t + i);
		return (free(t), new);
	}
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char **strs;
	int i;

	strs = (char **)malloc(sizeof(char *));
	if (strs)
	{
		i = 0;
		s = ft_skiper((char *)s, c, 1);
		while (*s)
		{
			*(strs + i) = ft_substr(s, 0, ft_strdlen((char *)s, c));
			if (!*(strs + i++))
				return(NULL);
			strs = ft_realoc(strs, i);
			if (!strs)
				return(NULL);
			s = ft_skiper((char *)s, c, 0);
			s = ft_skiper((char *)s, c, 1);
		}
		*(strs + i) = NULL;
	}
	return (strs);        
}

int main(void)
{
	char **strs = ft_split("   Hey, you !  .  ", ' ');
	printf("%s\n", *strs);
	printf("%s\n", strs[1]);
	printf("%s\n", strs[2]);
	printf("%s\n", strs[3]);
	printf("%s\n", strs[4]);
	
	return 0;
}
