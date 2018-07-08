/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddlast.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcaroff <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 14:55:59 by alcaroff          #+#    #+#             */
/*   Updated: 2017/11/21 15:07:26 by alcaroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstaddlast(t_list **start, t_list *new)
{
	t_list *last;
	last = ft_lstgetlast(*start);
	if (last)
		last->next = new;
	else
		*start = new;
}
