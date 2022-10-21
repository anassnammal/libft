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

// t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
// {
// 	t_list *new;
// 	new = malloc(sizeof(t_list) * ft_lstsize(lst));
// 	if (new)
// 	{
// 		while (lst)
// 		{
// 			new = f(lst->content);	
// 			lst = lst->next;
// 		}
// 	}
// }
