#include "libft.h"

char	**ft_realloc(char **t, int l, int p)
{
	char	**new;
	int		i;

    if (p <= 0)
        return (t);
	new = (char **)ft_calloc(sizeof(char *), (l + p));
	if (new)
	{
		i = -1;
		while (++i < l)
			*(new + i) = *(t + i);
		ft_bzero(t, sizeof(char *) * l);
		return (free(t), new);
	}
	return (NULL);
}
