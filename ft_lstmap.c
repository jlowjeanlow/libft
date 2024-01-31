/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlow <jlow@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 16:59:46 by jlow              #+#    #+#             */
/*   Updated: 2023/06/02 18:02:59 by jlow             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//create new node
//apply f to old node and copy inside new node
//link all the new node 

#include "libft.h"

void	to_link_node(t_list **head, t_list **new_node, t_list **tmp)
{
	if (*head == 0)
	{
		*head = *new_node;
		*tmp = *new_node;
	}
	else
	{
		(*tmp)->next = *new_node;
		*tmp = *new_node;
	}
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*head;
	t_list	*tmp;

	if (!lst || !f || !del)
		return (0);
	head = 0;
	tmp = 0;
	while (lst)
	{
		new_node = malloc(sizeof(t_list));
		new_node->content = (*f)(lst->content);
		new_node->next = 0;
		to_link_node(&head, &new_node, &tmp);
		lst = lst->next;
	}
	return (head);
}
