#include "libft.h"

static int	ft_counter(char const *s, char c)
{
	int	count;

	count = 1;
	while (*s)
	{
		if (*s == c)
			count++;
		s++;    
	}
	return (count);
}

static void	ft_populate(char **d, char const *s, char c, int len)
{
	int	count;
	int	i;

	i = 0;
	while (i < len)
	{
		count = 1;
		while (*s++ != c)
			count++;
		d[i] = (char *) malloc((count) * sizeof(char));
		s -= count;
		d[i][--count] = '\0';
		while (--count >= 0)
			d[i][count] = s[count];
		while (*s++ != c)
			;
		i++;
	}
	d[i] = (char *) malloc(sizeof(char));
}

char	**ft_split(char const *s, char c)
{
	int		r;
    char	**strs;

	r = ft_counter(s, c);
	strs = (char **) malloc((r) * sizeof(char));
	if (strs)
		ft_populate(strs, s, c, r);
	return (strs);
}
