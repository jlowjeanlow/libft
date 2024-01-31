/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlow <jlow@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 19:37:02 by jlow              #+#    #+#             */
/*   Updated: 2023/06/02 15:51:58 by jlow             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//copy n bytes from source memory block to destination memory block
// 2 strings not overlap

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*p;
	const unsigned char	*s;
	size_t				i;

	i = 0;
	p = dst;
	s = src;
	if (p == NULL && s == NULL)
		return (NULL);
	while (i < n)
	{
		p[i] = s[i];
		i++;
	}
	return (p);
}
