/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlow <jlow@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 16:42:04 by jlow              #+#    #+#             */
/*   Updated: 2023/06/02 15:51:46 by jlow             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//copy n bytes from source memory block to destination memory block
// 2 strings may overlap

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*p;
	const unsigned char	*s;
	size_t				i;

	p = dst;
	s = src;
	if (p == NULL && s == NULL)
		return (NULL);
	if (p > s && p < s + len)
	{
		while (len-- > 0)
			p[len] = s[len];
	}
	else
	{
		i = 0;
		while (i < len)
		{
			p[i] = s[i];
			i++;
		}
	}
	return (p);
}
