/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 14:25:42 by mriant            #+#    #+#             */
/*   Updated: 2021/12/04 15:11:25 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	i;

	i = 0;
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	if (start > ft_strlen(s))
	{
		result[0] = '\0';
		return (result);
	}
	while (s[i + start] && i < len)
	{
		result[i] = s[i + start];
		i ++;
	}
	result[i] = '\0';
	return (result);
}
