/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 09:16:29 by mriant            #+#    #+#             */
/*   Updated: 2021/12/03 09:49:19 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	s1_len;

	i = 0;
	s1_len = ft_strlen(s1);
	while (i < s1_len)
	{
		if (!ft_strchr(set, s1[i]))
			break ;
		i ++;
	}
	j = s1_len - 1;
	while (j + 1 > 0)
	{
		if (!ft_strchr(set, s1[j]))
			break ;
		j --;
	}
	return (ft_substr(s1, i, j - i + 1));
}
