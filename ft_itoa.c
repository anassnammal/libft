#include "libft.h"

char	*ft_itoa(int n)
{
	int tmp;
	int len;
	char *str;

	tmp = n;
	len = 0;
	while (tmp != 0)
	{
		tmp /= 10;
		len++;
	}
	str = (char *) malloc((len + 1) * sizeof(char));
	if (str)
	{
		*(str + len) = '\0';
		while (--len >= 0)
		{
			*(str + len) = (n % 10) + 48;
			n /= 10;
		}
	}
	return (str);
}