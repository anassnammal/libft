#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char 	*substr;
	int		i;

	substr = (char *) malloc((len + 1) * sizeof(char));
	if (substr)
	{
		i = 0;
		while (i < len)
		{
			*(substr + i) = *(s + start);
			start++;
			i++;
		}
		*(substr + i) = '\0';
	}
	return (substr);
}