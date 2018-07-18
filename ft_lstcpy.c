#include "libft.h"

t_list	*ft_lstcpy(t_list *lst)
{
	t_list	*cpy;

	cpy = NULL;
	while (lst)
	{
		ft_lstnewadd(NULL, 0, &cpy);
		cpy->content = lst->content;
		cpy->content_size = lst->content_size; 
		lst = lst->next;
	}
	return (cpy);
}
