#include "libft.h"

int		ft_lstfree(t_list **alst)
{
	t_list	*tmp;
	t_list	*lst;

	lst = *alst;
	while(lst)
	{
		tmp = lst;
		lst = lst->next;
		free(tmp->content);
		free(tmp);
	}
	*alst = NULL;
	return (0);
}
