/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanche <dasanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 11:33:44 by dasanche          #+#    #+#             */
/*   Updated: 2025/02/07 14:08:42 by dasanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Iterate the list ‘lst’ and apply the function ‘f’ to the contents
// of each node. Creates a list resulting from the correct and
// successive application of the function ‘f’ on each node. The
// ‘del’ function is used to remove the contents of a node, if necessary.

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst_new;
	void	*content;
	t_list	*node_new;

	lst_new = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		content = f(lst->content);
		node_new = ft_lstnew(content);
		if (!node_new)
		{
			del(content);
			ft_lstclear(&lst_new, del);
			return (NULL);
		}
		ft_lstadd_back(&lst_new, node_new);
		lst = lst->next;
	}
	return (lst_new);
}
