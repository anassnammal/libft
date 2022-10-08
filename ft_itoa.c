//#include "libft.h"

char	*ft_itoa(int n)
{
	int		tmp;
	int		len;
	char	*ret;

	tmp = n;
	len = 0;
	while (tmp != 0)
	{
		tmp /= 10;
		len++;
	}
	ret = (char *) malloc((len + 1) * sizeof(char));
	if (ret)
	{
		*(ret + len) = '\0';
		while (--len >= 0)
		{
			*(ret + len) = (n % 10) + 48;
			n /= 10;
		}
	}
	return (ret);
}

