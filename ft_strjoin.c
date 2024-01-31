/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlow <jlow@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 15:25:52 by jlow              #+#    #+#             */
/*   Updated: 2023/05/30 17:15:22 by jlow             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*ptr;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	j = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (ptr != NULL)
	{
		while (s1[i])
		{
			ptr[i] = s1[i];
			i++;
		}
		while (s2[j])
		{
			ptr[i++] = s2[j++];
		}
		ptr[i] = '\0';
	}
	return (ptr);
}

// #include <stdio.h>

// int main()
// {
// 	char s1[] = "peanut";
// 	char s2[] = "butter";

// 	printf("%s\n", ft_strjoin(s1, s2));

// 	return 0;
// }