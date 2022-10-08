#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	int		i;
	char	*str;

	len = ft_strlen(s1);
	len += ft_strlen(s2);
	str = (char *) malloc((len + 1) * sizeof(char));
	if (str)
	{
		i = 0;
		while (*s1)
			*(str + i++) = *s1++;
		while (*s2)
			*(str + i++) = *s2++;
		*(str + i) = '\0';
	}
	return (str);
}