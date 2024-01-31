/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlow <jlow@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 14:13:31 by jlow              #+#    #+#             */
/*   Updated: 2023/06/02 16:32:55 by jlow             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//NULL initialize to no occurence of c has been found yet
//search for the last occurence

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last_occurrence;

	last_occurrence = NULL;
	while (*s)
	{
		if (*s == (char) c)
			last_occurrence = (char *)s;
		s++;
	}
	if (*s == '\0' && c == '\0')
		return ((char *)s);
	return (last_occurrence);
}

// #include <stdio.h>

// int main(void)
// {
// 	char* str = "pen pineapple apple poo!";

// 	printf("%s\n", ft_strrchr(str, 'p'));
// 	printf("%p\n", ft_strrchr(str, 'p'));

// 	return 0;
// }
