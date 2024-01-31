/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlow <jlow@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 18:52:29 by jlow              #+#    #+#             */
/*   Updated: 2023/06/02 19:28:15 by jlow             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//append source string to destination string

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;

	if (!dstsize)
		return (ft_strlen(src));
	i = ft_strlen(dst);
	j = 0;
	dst_len = ft_strlen(dst);
	while (src[j] && (i < dstsize - 1))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	if (dstsize > dst_len)
		return (ft_strlen(src) + dst_len);
	return (ft_strlen(src) + dstsize);
}

// #include <stdio.h>

// #define MAX_LENGTH 12

// int main() {
//     char destination[MAX_LENGTH] = "Hello, ";
//     char source[] = "world!";

//     size_t dest_len = ft_strlen(destination);
//     size_t src_len = ft_strlen(source);

//     size_t total_len = ft_strlcat(destination, source, MAX_LENGTH);

//     printf("Concatenated string: %s\n", destination);
//     printf("Total length: %zu\n", total_len);
//     printf("Destination length: %zu\n", dest_len);
//     printf("Source length: %zu\n", src_len);

//     return 0;
// }
