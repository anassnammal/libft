#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
		while (*lst)
			lst = &(*lst)->next;
		new->next = 0;
		*lst = new;
}