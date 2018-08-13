/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcaroff <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 07:13:20 by alcaroff          #+#    #+#             */
/*   Updated: 2018/08/13 07:13:25 by alcaroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstcpy(t_list *lst)
{
	t_list	*cpy;
	t_list	*new;

	cpy = NULL;
	while (lst)
	{
		new = ft_lstnewlast(NULL, 0, &cpy);
		new->content = lst->content;
		new->content_size = lst->content_size;
		lst = lst->next;
	}
	return (cpy);
}
