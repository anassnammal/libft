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
	t_list	*tmplst;

	newlst = NULL;
	while (lst)
	{
		tmplst = ft_lstnew(f(lst->content));
		if (tmplst)
			ft_lstadd_back(&newlst, tmplst);
		else
		{
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		lst = lst->next;
	}
	return (newlst);
}
