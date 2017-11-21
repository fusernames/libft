/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnewlast.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcaroff <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 15:50:37 by alcaroff          #+#    #+#             */
/*   Updated: 2017/11/21 15:56:36 by alcaroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnewlast(t_list *start, void const *content, size_t content_size)
{
	t_list	*new;

	new = ft_lstnew(content, content_size);
	ft_lstaddlast(start, new);
	return (new);
}
