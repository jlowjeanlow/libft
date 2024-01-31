/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlow <jlow@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 15:59:17 by jlow              #+#    #+#             */
/*   Updated: 2023/06/02 16:39:10 by jlow             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//locate the first occurence of c in string in the first n bytes
// cannot i <= n cuz reserve a place for \0 

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (*ptr == (unsigned char) c)
			return (ptr);
		i++;
		ptr++;
	}
	return (0);
}

// #include <stdio.h>

// int main(void)
// {
// 	char  str[] = "www.42seoul.kr";

// 	printf("%s\n", ft_memchr(str, 'k', 12));
// 	printf("%s\n", ft_memchr(str, 'k', 14));
// 	return 0;
// }
