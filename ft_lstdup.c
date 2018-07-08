#include "libft.h"

t_list	*ft_lstdup(t_list *lst)
{
	t_list	*cpy;

	cpy = NULL;
	while (lst)
	{
		ft_lstnewadd(lst->content, lst->content_size, &cpy);
		lst = lst->next;
	}
	return (cpy);
}
