/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlow <jlow@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 20:16:46 by jlow              #+#    #+#             */
/*   Updated: 2023/06/02 19:08:52 by jlow             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//calls the deletion function del with the content of the node as the argument

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst == 0 || del == 0)
		return ;
	del(lst->content);
	free(lst);
}
