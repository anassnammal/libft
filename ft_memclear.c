#include "libft.h"

void	ft_free2d(void **ptr)
{
	int	i;

	i = 0;
	while (*(ptr + i) != NULL)
	{
		free(*(ptr + i));
		*(ptr + i) = NULL;
		i++;
	}
	free(ptr);
}