/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlow <jlow@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 18:26:30 by jlow              #+#    #+#             */
/*   Updated: 2023/05/22 15:26:16 by jlow             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*to set a memory block s to zero by 
setting each byte in the memoery block to value zero*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*ptr;
	size_t	i;

	ptr = s;
	i = 0;
	if (n > 0)
	{
		while (i < n)
		{
			ptr[i] = 0;
			i++;
		}
	}
}
