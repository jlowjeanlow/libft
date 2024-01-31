/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlow <jlow@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 12:24:48 by jlow              #+#    #+#             */
/*   Updated: 2023/06/02 16:32:25 by jlow             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//search for the first occurence 
//character not found, return NULL
//(char) c is to %256

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;

	ptr = (char *)s;
	while (*ptr)
	{
		if (*ptr == (char) c)
			return (ptr);
		ptr++;
	}
	if (c == '\0')
		return (ptr);
	return (NULL);
}

// #include <stdio.h>

// int main(void)
// {
//     char str[] = "123456789";
//     const char* s1;

//     printf("Find substring starting at %s\n", str, '5');
//     s1 = ft_strchr(str, '5');
//     if (s1)
//         printf("%s\n", s1);
//     else
//         printf("None\n");
//     return 0;
// }
