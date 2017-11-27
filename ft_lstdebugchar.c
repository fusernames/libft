/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdebugchar.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcaroff <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 08:40:58 by alcaroff          #+#    #+#             */
/*   Updated: 2017/11/27 14:45:49 by alcaroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdebugchar(t_list *lst)
{
	int		i;

	i = 1;
	while (lst)
	{
		ft_putnbr(i);
		ft_putchar(':');
		ft_putchar('\n');
		ft_putnbr(lst->content_size);
		ft_putchar('\n');
		ft_lstprintchar(lst);
		ft_putchar('\n');
		ft_putchar('\n');
		lst = lst->next;
		i++;
	}
}
