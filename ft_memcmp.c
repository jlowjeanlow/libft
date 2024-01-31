/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlow <jlow@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 16:23:35 by jlow              #+#    #+#             */
/*   Updated: 2023/06/02 16:44:01 by jlow             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//memory comparison, regardless of whether they are strings or not

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *) s1;
	ptr2 = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (ptr1[i] == ptr2[i])
			i++;
		else
			return (ptr1[i] - ptr2[i]);
	}
	return (0);
}

// #include <stdio.h>

// int main(void)
// {
// 	char s1[] = "42cadet";
// 	char s2[] = "42cadetabc";
// 	printf("%d\n", ft_memcmp(s1, s2, 3));
// 	printf("%d\n", ft_memcmp(s1, s2, 8));

// 	return (0);
// }
