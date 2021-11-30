/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 17:29:44 by mriant            #+#    #+#             */
/*   Updated: 2021/11/30 17:53:54 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	need_len;
	size_t	hay_len;

	if (!needle)
		return (haystack);
	i = 0;
	need_len = ft_strlen(needle);
	hay_len = ft_strlen(haystack);
	while (i < n && i < hay_len - need_len)
	{
		j = 0;
		while (i < hay_len - need_len && haystack[i + j] == needle[j])
			j ++;
		if (j == need_len - 1)
			return (haystack + i);
		i ++;
	}
	return (NULL);
}
