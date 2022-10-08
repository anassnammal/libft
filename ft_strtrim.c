#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int 	s_l;
	int 	set_l;
	int 	f;
	int		i;
	char	*str;

	s_l = ft_strlen(s1);
	set_l = ft_strlen(set);
	if (!ft_strncmp((s1 + (s_l - set_l)), set, set_l))
		s_l -= set_l;
	if (!ft_strncmp(s1, set, set_l))
	{
		s_l -= set_l;
		f = 1;
	}
	str = (char *) malloc((s_l + 1) * sizeof(char));
	if (str)
	{
		i = 0;
		f = 0;
		while (i < s_l)
		{
			if (f == 1)
				*(str + i) = *(s1 + set_l + i);
			else
				*(str + i) = *(s1 + i);
			i++;
		}
		*(str + i) = '\0';
	}
	return (str);
}