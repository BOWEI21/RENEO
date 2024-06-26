/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchen <bchen@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 17:05:11 by bchen             #+#    #+#             */
/*   Updated: 2024/05/09 17:52:07 by bchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*node;
	t_list	*next;

	node = *lst;
	next = NULL;
	if (lst == NULL || *lst == NULL)
		return ;
	while (node != NULL)
	{
		next = node->next;
		if (del != NULL)
			del(node->content);
		free(node);
		node = next;
	}
	*lst = NULL;
}
