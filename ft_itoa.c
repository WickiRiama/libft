/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 11:22:43 by mriant            #+#    #+#             */
/*   Updated: 2021/12/03 19:08:39 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nblen(long int n)
{
	int	n_len;

	n_len = 1;
	while (n / 10)
	{
		n_len ++;
		n /= 10;
	}
	return (n_len);
}

void	ft_writenb(long int n, int neg, int len, char *result)
{
	int	i;

	i = len - 1;
	while (i >= neg)
	{
		result[i] = (n % 10) + '0';
		n /= 10;
		i --;
	}
	result[len] = '\0';
	if (neg)
		result[0] = '-';
}

char	*ft_itoa(int nb)
{
	int			n_len;
	char		*result;
	int			neg;
	long int	n;

	n = (long int)nb;
	neg = 0;
	if (n < 0)
	{
		neg = 1;
		n = -n;
	}
	n_len = ft_nblen(n) + neg;
	result = malloc(sizeof(char) * (n_len + 1));
	if (!result)
		return (NULL);
	ft_writenb(n, neg, n_len, result);
	return (result);
}
