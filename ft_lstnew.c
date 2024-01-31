/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlow <jlow@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 20:00:06 by jlow              #+#    #+#             */
/*   Updated: 2023/05/31 20:47:46 by jlow             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	(*new_node).content = content;
	(*new_node).next = 0;
	return (new_node);
}

// #include <stdio.h>

// int		main(void)
// {
// 	char	str[] = "hello world good morning";

// 	t_list	*elem;

// 	elem = ft_lstnew((void *)str);
// 	printf("\n%s\n", elem->content);
// }
