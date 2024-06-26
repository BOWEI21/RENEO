/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchen <bchen@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 17:44:36 by bchen             #+#    #+#             */
/*   Updated: 2024/05/10 18:17:00 by bchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*node;
	void	*map;

	if (!lst || !f || !del)
		return (0);
	newlst = NULL;
	while (lst != NULL)
	{
		map = f(lst->content);
		node = ft_lstnew(map);
		if (!node)
		{
			del(map);
			ft_lstclear(&newlst, (*del));
			return (newlst);
		}
		ft_lstadd_back(&newlst, node);
		lst = lst->next;
	}
	return (newlst);
}
