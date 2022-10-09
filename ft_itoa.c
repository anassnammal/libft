#include <stdlib.h>
#include <stdio.h>
#include <string.h>

static int		ft_nbrlen(int n)
{
	int o;

	o = 0;
	while (n != 0)
	{
		n /= 10;
		o++;
	}
	return (o);
}

static void		ft_populate(char *dst, int n, int len)
{
	dst[len] = '\0';
	while (n != 0 || len == 1)
	{
		dst[--len] = (char)(n % 10 + 48);
		n /= 10;
	}
}

char	*ft_itoa(int n)
{
	int		s;
	int		len;
	char	*output;

	s = 0;
	if (n < 0)
	{
		s++;
		n *= -1;
	}
	len = ft_nbrlen(n) + s;
	if (!len)
		len++;
	output = (char *) malloc(len * sizeof(char) + 1);
	if (output)
	{
		ft_populate(output, n, len);
		if (s)
			output[0] = '-';
		return (output);
	}
	return (NULL);
}

int 	main(int argc, char const *argv[])
{
	printf("%s", ft_itoa(0));
	return 0;
}