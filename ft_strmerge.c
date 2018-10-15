/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmerge.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcaroff <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/15 17:25:03 by alcaroff          #+#    #+#             */
/*   Updated: 2018/10/15 17:25:04 by alcaroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmerge(char *s1, char *s2)
{
	char	*merge;

	if (!s1 && !s2)
		return (NULL);
	if (!(merge = ft_memalloc((ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (NULL);
	ft_strcpy(merge, s1);
	ft_strcat(merge, s2);
	free(s1);
	free(s2);
	return (merge);
}
