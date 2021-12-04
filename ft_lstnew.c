/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 15:40:11 by mriant            #+#    #+#             */
/*   Updated: 2021/12/04 16:59:53 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	new->content = content;
	new->next = NULL;
	return (new);
}

/*
#include <stdio.h>

int	main()
{
	int	a;
	char	c;
	char	*str = "abcd";
	t_list	*liste;

	a = 4;
	c = 'b';
	liste = ft_lstnew(&a);
	printf("%d\n", *(int *) liste->content);
	free(liste);
	liste = ft_lstnew(&c);
	printf("%c\n", *(char *) liste->content);
	free(liste);
	liste = ft_lstnew(str);
	printf("%s\n", (char *) liste->content);
	free(liste);
}
*/
