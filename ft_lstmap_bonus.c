/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anammal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 03:07:48 by anammal           #+#    #+#             */
/*   Updated: 2022/10/21 03:07:49 by anammal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*newnode;

	newlst = NULL;
	while (lst)
	{
		newnode = ft_lstnew(NULL);
		if (newnode)
		{
			newnode->content = f(lst->content);
			ft_lstadd_back(&newlst, newnode);
		}
		else
			return (ft_lstclear(&newlst, del), NULL);
		lst = lst->next;
	}
	return (newlst);
}
