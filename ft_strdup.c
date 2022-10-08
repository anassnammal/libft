#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*cpy;
	int		len;
	int		i;

	len = ft_strlen(s1) + 1;
	cpy = (char *) malloc(len * sizeof(char));
	if (cpy)
	{
		i = 0;
		while (len > i)
		{
			*(cpy + i) = *(s1 + i);
			i++;
		}
	}
	return (cpy);
}