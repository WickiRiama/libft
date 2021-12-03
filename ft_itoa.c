/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 11:22:43 by mriant            #+#    #+#             */
/*   Updated: 2021/12/03 11:59:24 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		n_len;
	int		i;
	char	*result;

	n_len = 1;
	i = n;
	while (i / 10)
	{
		n_len ++;
		i /= 10;
	}
	result = malloc(sizeof(char) * (n_len + 1));
	i = n_len - 1;
	while (i >= 0)
	{
		result[i] = (n % 10) + '0';
		n /= 10;
		i --;
	}
	result[n_len] = '\0';
	return (result);
}
