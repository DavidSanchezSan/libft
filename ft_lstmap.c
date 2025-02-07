
#include "libft.h"

// Iterate the list ‘lst’ and apply the function ‘f’ to the contents
// of each node. Creates a list resulting from the correct and
// successive application of the function ‘f’ on each node. The
// ‘del’ function is used to remove the contents of a node, if necessary.

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst_new;
	t_list	*node_new;

	if (lst && f && del)
	{
		while (lst)
		{
			node_new = ft_lstnew(f(lst->content));
			if (!node_new)
			{
				ft_sltclear(&lst_new, del);
				return (NULL);
			}
			ft_lstadd_back(&lst_new, node_new);
			lst = lst->next;
		}
	}
	else
	{
		return (NULL);
		lst_new = NULL;
	}
}
