/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcaroff <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 16:58:46 by alcaroff          #+#    #+#             */
/*   Updated: 2018/07/08 17:00:13 by alcaroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstfree(t_list **alst)
{
	t_list	*tmp;
	t_list	*lst;

	lst = *alst;
	while (lst)
	{
		tmp = lst;
		lst = lst->next;
		if (tmp->content_size > 0)
			free(tmp->content);
		free(tmp);
	}
	*alst = NULL;
	return (0);
}
