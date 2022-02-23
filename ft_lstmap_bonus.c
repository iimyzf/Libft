/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 00:57:26 by yagnaou           #+#    #+#             */
/*   Updated: 2021/11/28 02:46:58 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*node;

	if (!lst || !f)
		return (NULL);
	temp = ft_lstnew(f(lst->content));
	if (!temp)
	{
		free (temp);
		return (NULL);
	}
	node = temp;
	lst = lst->next;
	while (lst)
	{
		temp->next = ft_lstnew(f(lst->content));
		if (!temp->next)
		{
			ft_lstclear(&node, del);
			return (NULL);
		}
		temp = temp->next;
		lst = lst->next;
	}
	return (node);
}
/*
void	*f(void *c)
{
	*(char *)c = *(char *)c - 32;
}

int	main()
{
	t_list	*lst = ft_lstnew("map");
	lst->next = ft_lstnew(f(lst->content));
	ft_lstmap(lst, &f, free);
	printf("%s\n", lst->content);

}*/
