/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 17:54:48 by mriant            #+#    #+#             */
/*   Updated: 2021/11/26 19:28:48 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (size > 0)
	{
	i = 0;
	while (i < size - 1)
	{
		dst[i] = src[i];
		i ++;
	}
	dst[i] = '\0';
	}
	return (ft_strlen(src));
}
