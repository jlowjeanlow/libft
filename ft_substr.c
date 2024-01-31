/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlow <jlow@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:18:51 by jlow              #+#    #+#             */
/*   Updated: 2023/05/26 21:59:25 by jlow             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// start is the starting index of the substring
// len is the length of the substring
// len + 1 for extra null character
// len is set to strlen of s e.g. when len = 100000000000bytes

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			ptr[j] = s[i];
			j++;
		}
		i++;
	}
	ptr[j] = '\0';
	return (ptr);
}

// #include <stdio.h>

// int main()
// {
//     char src[] = "substr function Implementation";

//     int m = 7;
//     int n = 12;

//     char* dest = ft_substr(src, m, n);

//     printf("%s\n", dest);

//     return 0;
// }