/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnewadd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcaroff <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 16:58:33 by alcaroff          #+#    #+#             */
/*   Updated: 2018/07/08 16:58:36 by alcaroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnewadd(void const *content, size_t content_size, t_list **alst)
{
	t_list	*new;

	new = ft_lstnew(content, content_size);
	ft_lstadd(alst, new);
	return (new);
}
