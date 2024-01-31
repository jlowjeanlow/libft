/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlow <jlow@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 17:10:35 by jlow              #+#    #+#             */
/*   Updated: 2023/06/02 16:04:27 by jlow             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//copy strings from source (dstsize -1) to destination
//dstsize is the size of dest buffer, max no. of characters that can be copied
//returns the length of src string, not actual length of copied string dst

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	if (!dstsize)
		return (ft_strlen(src));
	i = 0;
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

// #include <stdio.h>

// int main()
// {
// 	size_t i;
// 	char s1[] = "heifhisehflih";
// 	char s2[] = "axff";

// 	i = ft_strlcpy(s1, s2, 1);
// 	printf("%lu\n", i);
// 	return (0);
// }