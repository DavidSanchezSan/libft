
#include "libft.h"

// Iterate the list ‘lst’ and apply the function ‘f’
// on the content of each node.

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*temp;

	temp = lst;
	while (temp)
	{
		f(temp->content);
		temp = temp->next;
	}
}
