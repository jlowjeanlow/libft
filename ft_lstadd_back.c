/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlow <jlow@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 19:58:00 by jlow              #+#    #+#             */
/*   Updated: 2023/06/02 18:51:24 by jlow             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//adding new elements at the end of the list
//find the last node of the list

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!(*lst))
	{
		*lst = new;
	}
	else
	{
		temp = *lst;
		while (temp->next != 0)
			temp = temp->next;
		temp->next = new;
	}
}
