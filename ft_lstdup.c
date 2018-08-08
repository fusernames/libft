/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcaroff <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 16:58:54 by alcaroff          #+#    #+#             */
/*   Updated: 2018/07/08 16:58:55 by alcaroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstdup(t_list *lst)
{
	t_list	*cpy;

	cpy = NULL;
	while (lst)
	{
		ft_lstnewlast(lst->content, lst->content_size, &cpy);
		lst = lst->next;
	}
	return (cpy);
}
