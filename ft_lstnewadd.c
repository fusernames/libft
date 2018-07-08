#include "libft.h"

t_list	*ft_lstnewadd(void const *content, size_t content_size, t_list **alst)
{
	t_list	*new;

	new = ft_lstnew(content, content_size);
	ft_lstadd(alst, new);
	return (new);
}
