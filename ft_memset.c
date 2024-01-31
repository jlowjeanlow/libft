/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlow <jlow@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 16:31:33 by jlow              #+#    #+#             */
/*   Updated: 2023/05/22 16:30:33 by jlow             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//repeating c for len bytes to string b
//to initialize buffer, clearing sensitive data 
//or preparing memory blocks for subseqeunt operations
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;
	size_t			i;

	p = b;
	i = 0;
	while (i < len)
	{
		p[i] = c;
		i++;
	}
	return (p);
}
